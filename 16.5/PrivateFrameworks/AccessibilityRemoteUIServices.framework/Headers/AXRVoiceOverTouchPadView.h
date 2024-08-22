// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXRVOICEOVERTOUCHPADVIEW_H
#define AXRVOICEOVERTOUCHPADVIEW_H

@class UIView;
@protocol AXRVoiceOverTouchPadViewDelegate;



@interface AXRVoiceOverTouchPadView : UIView

@property (weak, nonatomic) NSObject<AXRVoiceOverTouchPadViewDelegate> *delegate; // ivar: _delegate


-(BOOL)isAccessibilityElement;
-(NSUInteger)accessibilityTraits;
-(id)accessibilityHint;
-(id)accessibilityLabel;
-(struct CGRect )_accessibilityGesturePracticeRegion;
-(void)_accessibilitySetCurrentGesture:(id)arg0 ;


@end


#endif