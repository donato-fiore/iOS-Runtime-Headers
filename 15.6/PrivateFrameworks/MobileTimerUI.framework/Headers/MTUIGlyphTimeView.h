// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTUIGLYPHTIMEVIEW_H
#define MTUIGLYPHTIMEVIEW_H

@class UIView, UIImageView, NSString, UILabel;



@interface MTUIGlyphTimeView : UIView

@property (retain, nonatomic) UIImageView *glyphImageView; // ivar: _glyphImageView
@property (retain, nonatomic) NSString *glyphName; // ivar: _glyphName
@property (nonatomic) NSUInteger style; // ivar: _style
@property (retain, nonatomic) UILabel *timeLabel; // ivar: _timeLabel


-(id)initWithFont:(id)arg0 textColor:(id)arg1 glyphName:(id)arg2 style:(NSUInteger)arg3 ;
-(void)setComponentColor:(id)arg0 ;
-(void)setupConstraints;
-(void)setupGlyphName:(id)arg0 size:(CGFloat)arg1 glyphColor:(id)arg2 ;
-(void)setupTimeLabelWithFont:(id)arg0 textColor:(id)arg1 ;


@end


#endif