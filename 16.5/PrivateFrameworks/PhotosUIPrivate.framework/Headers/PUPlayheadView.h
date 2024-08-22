// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUPLAYHEADVIEW_H
#define PUPLAYHEADVIEW_H

@class UIView;



@interface PUPlayheadView : UIView {
    UIView *_line;
    UIView *_outline;
    BOOL _tintColorForPlayhead;
}




-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)tintColorDidChange;


@end


#endif