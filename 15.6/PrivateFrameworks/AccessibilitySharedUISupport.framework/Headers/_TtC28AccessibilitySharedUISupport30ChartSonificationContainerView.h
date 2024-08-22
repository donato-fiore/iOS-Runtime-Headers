// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC28ACCESSIBILITYSHAREDUISUPPORT30CHARTSONIFICATIONCONTAINERVIEW_H
#define _TTC28ACCESSIBILITYSHAREDUISUPPORT30CHARTSONIFICATIONCONTAINERVIEW_H

@class UIView, NSAttributedString;



@interface _TtC28AccessibilitySharedUISupport30ChartSonificationContainerView : UIView {
    ? chartDescriptor;
    ? playheadView;
    ? playheadLabel;
    ? playheadTimer;
    ? displayLink;
    ? numberFormatter;
    ? state;
}


@property (nonatomic, retain) NSAttributedString *accessibilityAttributedLabel;
@property (nonatomic) BOOL isAccessibilityElement;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_accessibilityDidChangeSonificationPlaybackPosition:(CGFloat)arg0 ;
-(void)_accessibilitySonificationPlaybackStatusChanged:(NSUInteger)arg0 ;
-(void)updatePlayhead:(CGFloat)arg0 ;


@end


#endif