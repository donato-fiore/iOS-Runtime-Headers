// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIIMAGEDATACONSUMER_H
#define SKUIIMAGEDATACONSUMER_H

@class SSVURLDataConsumer;



@interface SKUIImageDataConsumer : SSVURLDataConsumer

@property (readonly, nonatomic, getter=isImagePlaceholderAvailable) BOOL imagePlaceholderAvailable;


-(id)imageForColor:(id)arg0 ;
-(id)imageForColor:(id)arg0 size:(struct CGSize )arg1 ;
-(id)imageForImage:(id)arg0 ;
-(id)imagePlaceholderForColor:(id)arg0 ;
-(id)objectForData:(id)arg0 response:(id)arg1 error:(*id)arg2 ;


@end


#endif