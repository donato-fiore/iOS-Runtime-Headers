// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PEMEDIADESTINATION_H
#define PEMEDIADESTINATION_H


#import <Foundation/Foundation.h>


@interface PEMediaDestination : NSObject



-(BOOL)isSavingRequestWithIdentifier:(int)arg0 ;
-(BOOL)supportsProgressForRequestWithIdentifier:(int)arg0 ;
-(CGFloat)progressForRequestWithIdentifier:(int)arg0 ;
-(int)revertEditsForAsset:(id)arg0 completionHandler:(id)arg1 ;
-(int)saveEditsByCopyingAsset:(id)arg0 withResourceURL:(id)arg1 usingContentEditingOutput:(id)arg2 livePhotoState:(unsigned short)arg3 completionHandler:(id)arg4 ;
-(int)saveEditsForAsset:(id)arg0 usingContentEditingOutput:(id)arg1 livePhotoState:(unsigned short)arg2 completionHandler:(id)arg3 ;
-(int)saveInternalEditsForAsset:(id)arg0 usingCompositionController:(id)arg1 contentEditingOutput:(id)arg2 version:(NSInteger)arg3 livePhotoState:(unsigned short)arg4 originalComposition:(id)arg5 completionHandler:(id)arg6 ;
-(void)cancelRequestWithIdentifier:(int)arg0 ;
-(void)ensureEditableCopyOfAsset:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif