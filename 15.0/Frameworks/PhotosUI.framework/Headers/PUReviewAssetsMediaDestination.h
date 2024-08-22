// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUREVIEWASSETSMEDIADESTINATION_H
#define PUREVIEWASSETSMEDIADESTINATION_H

@class NSURL, NSMutableDictionary;


#import "PUMediaDestination.h"
#import "PUEditableMediaProvider.h"

@interface PUReviewAssetsMediaDestination : PUMediaDestination

@property (readonly, nonatomic) NSURL *_desiredOutputDirectory; // ivar: __desiredOutputDirectory
@property (readonly, nonatomic) PUEditableMediaProvider *_mediaProvider; // ivar: __mediaProvider
@property (readonly, nonatomic, getter=_pendingRequestsByRequestIdentifier) NSMutableDictionary *pendingRequestsByRequestIdentifier; // ivar: _pendingRequestsByRequestIdentifier


-(BOOL)isSavingRequestWithIdentifier:(int)arg0 ;
-(BOOL)supportsProgressForRequestWithIdentifier:(int)arg0 ;
-(CGFloat)progressForRequestWithIdentifier:(int)arg0 ;
-(NSInteger)_workImageVersionForContentEditingOutput:(id)arg0 ;
-(id)_saveEditsWithRequest:(id)arg0 completionHandler:(id)arg1 ;
-(id)initWithOutputDirectory:(id)arg0 mediaProvider:(id)arg1 ;
-(int)revertEditsForAsset:(id)arg0 completionHandler:(id)arg1 ;
-(int)saveEditsByCopyingAsset:(id)arg0 withResourceURL:(id)arg1 usingContentEditingOutput:(id)arg2 livePhotoEditModel:(id)arg3 completionHandler:(id)arg4 ;
-(int)saveEditsForAsset:(id)arg0 usingContentEditingOutput:(id)arg1 livePhotoEditModel:(id)arg2 useRawIfAvailable:(BOOL)arg3 completionHandler:(id)arg4 ;
-(int)saveInternalEditsForAsset:(id)arg0 usingCompositionController:(id)arg1 contentEditingOutput:(id)arg2 version:(NSInteger)arg3 livePhotoEditModel:(id)arg4 originalComposition:(id)arg5 useRawIfAvailable:(BOOL)arg6 completionHandler:(id)arg7 ;
-(void)_requestDidFinish:(id)arg0 ;
-(void)cancelRequestWithIdentifier:(int)arg0 ;
-(void)ensureEditableCopyOfAsset:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif