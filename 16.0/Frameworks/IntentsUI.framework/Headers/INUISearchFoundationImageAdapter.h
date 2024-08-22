// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INUISEARCHFOUNDATIONIMAGEADAPTER_H
#define INUISEARCHFOUNDATIONIMAGEADAPTER_H

@class SFImage, NSValue, INImage;



@interface INUISearchFoundationImageAdapter : SFImage {
    NSValue *_sizeValue;
}


@property (copy, nonatomic) INImage *intentsImage; // ivar: _intentsImage


+(id)_sharedImageLoader;
+(void)initialize;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithIntentsImage:(id)arg0 ;
-(id)initWithPayloadImage:(id)arg0 ;
-(id)payloadImage;
-(int)source;
-(struct CGSize )size;
-(void)setSize:(struct CGSize )arg0 ;


@end


#endif