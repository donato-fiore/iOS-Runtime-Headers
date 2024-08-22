// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SINGLECOLORCUBECORRECTIONSTAGE_H
#define SINGLECOLORCUBECORRECTIONSTAGE_H

@protocol MTLTexture;

#import <Foundation/Foundation.h>


@interface SingleColorCubeCorrectionStage : NSObject {
    id<MTLTexture> *_defaultCubeTexture;
}




-(id)cubeTexture;
-(id)init:(id)arg0 cubeSize:(unsigned int)arg1 data:(char *)arg2 ;
-(int)load3DTextureFromData:(char *)arg0 cubeSize:(unsigned int)arg1 metal:(id)arg2 outTexture:(*id)arg3 ;


@end


#endif