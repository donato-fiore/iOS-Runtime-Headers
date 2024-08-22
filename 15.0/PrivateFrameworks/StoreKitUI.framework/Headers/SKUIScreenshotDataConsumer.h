// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUISCREENSHOTDATACONSUMER_H
#define SKUISCREENSHOTDATACONSUMER_H



#import "SKUIStyledImageDataConsumer.h"

@interface SKUIScreenshotDataConsumer : SKUIStyledImageDataConsumer

@property (nonatomic) BOOL forcesPortrait; // ivar: _forcesPortrait


+(id)consumer;
+(id)consumerWithScreenshotSize:(struct CGSize )arg0 ;
-(id)imageForColor:(id)arg0 size:(struct CGSize )arg1 ;
-(id)imageForImage:(id)arg0 ;


@end


#endif