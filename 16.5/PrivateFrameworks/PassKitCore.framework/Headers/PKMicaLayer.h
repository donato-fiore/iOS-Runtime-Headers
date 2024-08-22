// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKMICALAYER_H
#define PKMICALAYER_H

@class CALayer, NSString, NSDictionary;
@protocol PKMicaResizableView;



@interface PKMicaLayer : CALayer <PKMicaResizableView>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDictionary *publishedColorLayers; // ivar: _publishedColorLayers
@property (readonly, nonatomic) NSDictionary *publishedColorShapeLayers; // ivar: _publishedColorShapeLayers
@property (readonly, nonatomic) CALayer *rootLayer; // ivar: _rootLayer
@property (readonly) Class superclass;


-(CGFloat)pointScaleToMatchBoundsSize:(struct CGSize )arg0 ;
-(id)init;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 package:(id)arg1 ;
-(struct CGSize )boundsSizeToMatchPointScale:(CGFloat)arg0 ;
-(void)dealloc;
-(void)layoutSublayers;


@end


#endif