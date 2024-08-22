// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKGRAPHRENDERVIEW_H
#define HKGRAPHRENDERVIEW_H

@class UIView, NSString;
@protocol HKGraphRenderer, HKGraphRenderDelegate;



@interface HKGraphRenderView : UIView <HKGraphRenderer>



@property (nonatomic) CGRect axisRect; // ivar: _axisRect
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<HKGraphRenderDelegate> *renderDelegate; // ivar: renderDelegate
@property (readonly) Class superclass;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )drawAttributedText:(id)arg0 atPoint:(struct CGPoint )arg1 horizontalAlignment:(NSInteger)arg2 verticalAlignment:(NSInteger)arg3 exclusion:(id)arg4 ;
-(struct CGSize )drawText:(id)arg0 atPoint:(struct CGPoint )arg1 spaceAvailable:(id)arg2 horizontalAlignment:(NSInteger)arg3 verticalAlignment:(NSInteger)arg4 textColor:(id)arg5 font:(id)arg6 clipToAxis:(BOOL)arg7 exclusion:(id)arg8 ;
-(void)drawPath:(id)arg0 strokeColor:(id)arg1 fillColor:(id)arg2 markerImage:(id)arg3 useGradientFill:(BOOL)arg4 blendMode:(int)arg5 clipToAxes:(BOOL)arg6 ;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)fillRect:(struct CGRect )arg0 withFillStyle:(id)arg1 axisRect:(struct CGRect )arg2 alpha:(CGFloat)arg3 ;
-(void)setNeedsRender;


@end


#endif