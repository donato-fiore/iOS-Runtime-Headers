// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC12COREAUDIOKIT24AUVERTICALSEGMENTCONTROL_H
#define _TTC12COREAUDIOKIT24AUVERTICALSEGMENTCONTROL_H

@class UIControl, NSArray;



@interface _TtC12CoreAudioKit24AUVerticalSegmentControl : UIControl {
    ? items;
    ? accessibleElements;
    ? columnCount;
    ? selectedSegmentIndex;
    ? segmentHeight;
}


@property (nonatomic, copy) NSArray *accessibilityElements;


-(id)colorAt:(NSInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 data:(id)arg1 ;
-(void)layoutSubviews;
-(void)removeFromSuperview;
-(void)segmentEnabledChangedWithNotification:(id)arg0 ;
-(void)segmentSelectionChangedWithNotification:(id)arg0 ;
-(void)setSegmentAt:(NSInteger)arg0 enabled:(BOOL)arg1 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif