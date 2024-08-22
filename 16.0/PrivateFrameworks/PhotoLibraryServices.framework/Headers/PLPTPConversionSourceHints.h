// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLPTPCONVERSIONSOURCEHINTS_H
#define PLPTPCONVERSIONSOURCEHINTS_H

@class UTType;

#import <Foundation/Foundation.h>


@interface PLPTPConversionSourceHints : NSObject {
    UTType *_livePhotoImageContentType;
}


@property (readonly) BOOL isLivePhoto; // ivar: _isLivePhoto
@property (readonly) BOOL isRender; // ivar: _isRender
@property (readonly) BOOL isVideo; // ivar: _isVideo
@property (readonly) BOOL livePhotoImageIsHEIC;


+(id)hintsForAsset:(id)arg0 isVideo:(BOOL)arg1 isRender:(BOOL)arg2 ;
-(id)initWithAsset:(id)arg0 isVideo:(BOOL)arg1 isRender:(BOOL)arg2 ;


@end


#endif