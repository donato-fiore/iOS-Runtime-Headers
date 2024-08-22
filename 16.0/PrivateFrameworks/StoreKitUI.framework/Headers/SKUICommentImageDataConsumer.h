// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUICOMMENTIMAGEDATACONSUMER_H
#define SKUICOMMENTIMAGEDATACONSUMER_H



#import "SKUIStyledImageDataConsumer.h"

@interface SKUICommentImageDataConsumer : SKUIStyledImageDataConsumer

@property (copy) id *completionBlock; // ivar: _completionBlock


-(id)_scaledImageWithBounds:(struct CGSize )arg0 contentRect:(struct CGRect )arg1 drawBlock:(id)arg2 ;
-(id)imageForImage:(id)arg0 ;


@end


#endif