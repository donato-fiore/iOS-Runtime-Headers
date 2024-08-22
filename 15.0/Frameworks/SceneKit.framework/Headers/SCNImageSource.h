// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCNIMAGESOURCE_H
#define SCNIMAGESOURCE_H


#import <Foundation/Foundation.h>


@interface SCNImageSource : NSObject



-(BOOL)isOpaque;
-(BOOL)isPremultiplied;
-(id)textureSource;
-(void)connectToProxy:(struct __C3DImageProxy *)arg0 ;


@end


#endif