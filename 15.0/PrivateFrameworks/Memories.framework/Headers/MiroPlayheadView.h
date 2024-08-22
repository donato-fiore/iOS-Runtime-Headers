// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MIROPLAYHEADVIEW_H
#define MIROPLAYHEADVIEW_H

@class UIView;



@interface MiroPlayheadView : UIView {
    UIView *_line;
    BOOL _tintColorForPlayhead;
}




-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)tintColorDidChange;


@end


#endif