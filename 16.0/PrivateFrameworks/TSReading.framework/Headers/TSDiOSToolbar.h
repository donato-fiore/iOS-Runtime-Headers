// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDIOSTOOLBAR_H
#define TSDIOSTOOLBAR_H

@class UIToolbar, UIImage;



@interface TSDiOSToolbar : UIToolbar

@property (retain, nonatomic) UIImage *backgroundImage; // ivar: mBackgroundImage
@property (nonatomic) BOOL drawsBackground; // ivar: mDrawsBackground
@property (nonatomic) CGSize shadowOffset; // ivar: mShadowOffset
@property (nonatomic) CGFloat shadowOpacity; // ivar: mShadowOpacity
@property (nonatomic) CGFloat shadowRadius; // ivar: mShadowRadius
@property (nonatomic) CGFloat shadowX; // ivar: mShadowX


-(id)actionForLayer:(id)arg0 forKey:(id)arg1 ;
-(void)dealloc;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)p_updateLayerFlags;
-(void)setupShadowPath;


@end


#endif