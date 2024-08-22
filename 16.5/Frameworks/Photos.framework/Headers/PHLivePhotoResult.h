// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHLIVEPHOTORESULT_H
#define PHLIVEPHOTORESULT_H



#import "PHCompositeMediaResult.h"

@interface PHLivePhotoResult : PHCompositeMediaResult {
    PHCompositeMediaResult *_imageResult;
    PHCompositeMediaResult *_videoResult;
    BOOL _isDegraded;
}




-(BOOL)containsValidData;
-(BOOL)isDegraded;
-(BOOL)isPlaceholder;
-(NSInteger)uiOrientation;
-(id)allowedInfoKeys;
-(id)exifOrientation;
-(id)imageData;
-(id)imageURL;
-(id)sanitizedInfoDictionary;
-(id)uniformTypeIdentifier;
-(id)videoAdjustmentData;
-(id)videoURL;
-(struct CGImage *)imageRef;
-(unsigned int)cgOrientation;
-(void)_mergeInfoDictionaryFromResult:(id)arg0 ;
-(void)addImageResult:(id)arg0 ;
-(void)addVideoResult:(id)arg0 ;
-(void)setDegraded:(BOOL)arg0 ;


@end


#endif