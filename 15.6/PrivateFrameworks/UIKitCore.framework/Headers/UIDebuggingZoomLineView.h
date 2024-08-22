// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIDEBUGGINGZOOMLINEVIEW_H
#define UIDEBUGGINGZOOMLINEVIEW_H



#import "UIView.h"
#import "UILabel.h"

@interface UIDebuggingZoomLineView : UIView

@property (nonatomic) NSUInteger direction; // ivar: _direction
@property (nonatomic) CGPoint end; // ivar: _end
@property (retain, nonatomic) UILabel *lineLabel; // ivar: _lineLabel
@property (nonatomic) CGRect rect; // ivar: _rect
@property (nonatomic) CGPoint start; // ivar: _start


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)updateLabelFrame;


@end


#endif