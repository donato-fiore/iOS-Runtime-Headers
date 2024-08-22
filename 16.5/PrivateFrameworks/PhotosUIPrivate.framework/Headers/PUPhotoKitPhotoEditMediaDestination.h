// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUPHOTOKITPHOTOEDITMEDIADESTINATION_H
#define PUPHOTOKITPHOTOEDITMEDIADESTINATION_H

@class NSMutableDictionary;


#import "PUMediaDestination.h"

@interface PUPhotoKitPhotoEditMediaDestination : PUMediaDestination

@property (readonly, nonatomic, getter=_pendingRequestsByRequestIdentifier) NSMutableDictionary *pendingRequestsByRequestIdentifier; // ivar: _pendingRequestsByRequestIdentifier


-(BOOL)isSavingRequestWithIdentifier:(int)arg0 ;
-(BOOL)supportsProgressForRequestWithIdentifier:(int)arg0 ;
-(CGFloat)progressForRequestWithIdentifier:(int)arg0 ;
-(NSInteger)_workImageVersionForContentEditingOutput:(id)arg0 ;
-(id)_fetchUpdatedAssetWithLocalIdentifier:(id)arg0 photoLibrary:(id)arg1 ;
-(id)_saveEditsForPhoto:(id)arg0 saveRequest:(id)arg1 completionHandler:(id)arg2 ;
-(id)init;
-(int)revertEditsForAsset:(id)arg0 completionHandler:(id)arg1 ;
-(int)saveEditsByCopyingAsset:(id)arg0 withResourceURL:(id)arg1 usingContentEditingOutput:(id)arg2 livePhotoEditModel:(id)arg3 completionHandler:(id)arg4 ;
-(int)saveEditsForAsset:(id)arg0 usingContentEditingOutput:(id)arg1 livePhotoEditModel:(id)arg2 useRawIfAvailable:(BOOL)arg3 completionHandler:(id)arg4 ;
-(int)saveInternalEditsForAsset:(id)arg0 usingCompositionController:(id)arg1 contentEditingOutput:(id)arg2 version:(NSInteger)arg3 livePhotoEditModel:(id)arg4 originalComposition:(id)arg5 useRawIfAvailable:(BOOL)arg6 completionHandler:(id)arg7 ;
-(void)_requestDidFinish:(id)arg0 ;
-(void)cancelRequestWithIdentifier:(int)arg0 ;
-(void)ensureEditableCopyOfAsset:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif