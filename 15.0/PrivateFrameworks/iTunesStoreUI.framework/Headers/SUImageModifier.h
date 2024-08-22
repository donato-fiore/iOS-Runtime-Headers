// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUIMAGEMODIFIER_H
#define SUIMAGEMODIFIER_H


#import <Foundation/Foundation.h>


@interface SUImageModifier : NSObject

@property (readonly, nonatomic) BOOL scalesImage;


-(id)newImageForImage:(id)arg0 ;
-(struct CGRect )imageFrameForImage:(id)arg0 currentFrame:(struct CGRect )arg1 finalSize:(struct CGSize )arg2 ;
-(struct CGSize )finalSizeForSize:(struct CGSize )arg0 originalSize:(struct CGSize )arg1 ;
-(void)drawAfterImageForContext:(struct CGContext *)arg0 imageFrame:(struct CGRect )arg1 finalSize:(struct CGSize )arg2 ;
-(void)drawBeforeImageForContext:(struct CGContext *)arg0 imageFrame:(struct CGRect )arg1 finalSize:(struct CGSize )arg2 ;


@end


#endif