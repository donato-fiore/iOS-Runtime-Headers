// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKDEBUGHIGHLIGHTVIEW_H
#define GKDEBUGHIGHLIGHTVIEW_H

@class UIView, NSString, UIColor;



@interface GKDebugHighlightView : UIView

@property (retain, nonatomic) NSString *caption; // ivar: _caption
@property (retain, nonatomic) UIColor *color; // ivar: _color
@property (nonatomic) BOOL isOval; // ivar: _isOval


-(id)init;
-(void)drawRect:(struct CGRect )arg0 ;


@end


#endif