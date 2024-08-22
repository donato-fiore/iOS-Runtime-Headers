// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUIMAGEFACTORY_H
#define NUIMAGEFACTORY_H


#import <Foundation/Foundation.h>


@interface NUImageFactory : NSObject



+(id)_newCIImageFromImage:(id)arg0 ;
+(id)bufferImageWithLayout:(id)arg0 format:(id)arg1 colorSpace:(id)arg2 ;
+(id)newCIImageFromBufferImage:(id)arg0 ;
+(id)surfaceImageWithLayout:(id)arg0 format:(id)arg1 colorSpace:(id)arg2 ;
+(struct CGImage *)newCGImageFromBufferImage:(id)arg0 ;
+(struct CGImage *)newCGImageFromImageStorage:(id)arg0 colorSpace:(id)arg1 ;


@end


#endif