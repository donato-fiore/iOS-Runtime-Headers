// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DOCTAGRENDERER_H
#define DOCTAGRENDERER_H


#import <Foundation/Foundation.h>


@interface DOCTagRenderer : NSObject

@property (readonly, nonatomic) BOOL differentiateWithShapes;


+(id)shared;
-(CGFloat)_customRenderingBaselineOffsetFromBottomForRequest:(id)arg0 ;
-(CGFloat)_defaultBorderWidth;
-(CGFloat)_tagChainSpacingForSpacingType:(NSUInteger)arg0 tagDimension:(CGFloat)arg1 ;
-(id)_spacerImageWithWidth:(CGFloat)arg0 ;
-(id)renderAttributedStringWithRequest:(id)arg0 ;
-(id)renderImageWithRequest:(id)arg0 ;
-(id)tintedSystemImageForTag:(id)arg0 ;
-(struct CGSize )sizeOfTagContentForRenderingRequest:(id)arg0 ;
-(void)__drawInContext:(struct CGContext *)arg0 tag:(id)arg1 contextSize:(struct CGSize )arg2 tagRect:(struct CGRect )arg3 blendMode:(int)arg4 fillColor:(id)arg5 strokeColor:(id)arg6 traitCollection:(id)arg7 ;
-(void)_insertPrefixTextAttachment:(id)arg0 spacerAttributedString:(id)arg1 ensuringLayoutDirection:(NSInteger)arg2 into:(id)arg3 ;
-(void)_renderInContext:(struct CGContext *)arg0 request:(id)arg1 ;
-(void)renderInUncacheableContext:(struct CGContext *)arg0 request:(id)arg1 ;


@end


#endif