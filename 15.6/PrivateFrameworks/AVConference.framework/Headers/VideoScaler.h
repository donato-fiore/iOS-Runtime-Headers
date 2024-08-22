// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VIDEOSCALER_H
#define VIDEOSCALER_H


#import <Foundation/Foundation.h>

#import "VCPixelTransferSession.h"

@interface VideoScaler : NSObject {
    VCPixelTransferSession *_pixelTransferSession;
}




-(?)convertAndScalePixelBuffer:(?)arg0 toWidth:(?)arg1 toHeight:(?)arg2 withPixelFormat:(?)arg3 usingPixelBufferPoolandStoreTo;
-(id)init;
-(void)dealloc;


@end


#endif