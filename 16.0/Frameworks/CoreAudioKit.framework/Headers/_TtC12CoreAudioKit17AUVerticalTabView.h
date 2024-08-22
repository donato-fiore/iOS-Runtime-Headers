// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC12COREAUDIOKIT17AUVERTICALTABVIEW_H
#define _TTC12COREAUDIOKIT17AUVERTICALTABVIEW_H

@class UIControl, NSArray;



@interface _TtC12CoreAudioKit17AUVerticalTabView : UIControl {
    ? horizontal;
    ? tabs;
    ? accessibleElements;
    ? tabDimension;
}


@property (nonatomic, copy) NSArray *accessibilityElements;
@property (nonatomic) CGFloat maxTabDimension; // ivar: maxTabDimension
@property (nonatomic) NSInteger numActiveTabs; // ivar: numActiveTabs
@property (nonatomic) NSInteger selectedTabIndex; // ivar: selectedTabIndex


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 data:(id)arg1 horizontal:(BOOL)arg2 ;
-(void)layoutSubviews;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif