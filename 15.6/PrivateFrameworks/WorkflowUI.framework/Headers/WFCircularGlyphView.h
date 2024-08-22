// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFCIRCULARGLYPHVIEW_H
#define WFCIRCULARGLYPHVIEW_H

@class UIView, UIColor, UIImageView, NSString;



@interface WFCircularGlyphView : UIView

@property (retain, nonatomic) UIView *backgroundColorView; // ivar: _backgroundColorView
@property (retain, nonatomic) UIColor *glyphBackgroundColor; // ivar: _glyphBackgroundColor
@property (retain, nonatomic) UIColor *glyphColor; // ivar: _glyphColor
@property (retain, nonatomic) UIImageView *glyphImageView; // ivar: _glyphImageView
@property (retain, nonatomic) NSString *glyphName; // ivar: _glyphName
@property (nonatomic) CGFloat imagePointSize; // ivar: _imagePointSize


-(id)glyphImage;
-(id)initWithName:(id)arg0 glyphColor:(id)arg1 backgroundColor:(id)arg2 ;
-(void)configureBackgroundColorView;
-(void)configureGlyphImageView;
-(void)configureViews;


@end


#endif