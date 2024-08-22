// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QLROUNDPROGRESSVIEW_H
#define QLROUNDPROGRESSVIEW_H

@class UIView;



@interface QLRoundProgressView : UIView

@property (nonatomic) CGFloat progress;


+(Class)layerClass;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)didMoveToWindow;
-(void)drawLayer:(id)arg0 inContext:(struct CGContext *)arg1 ;


@end


#endif