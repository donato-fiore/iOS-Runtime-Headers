// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TLKSTACKVIEW_H
#define TLKSTACKVIEW_H

@class NUIContainerStackView;



@interface TLKStackView : NUIContainerStackView

@property (nonatomic) BOOL flipsToVerticalAxisForAccessibilityContentSizes; // ivar: _flipsToVerticalAxisForAccessibilityContentSizes
@property (nonatomic) BOOL isForcedToBeVertical; // ivar: _isForcedToBeVertical


-(void)addArrangedSubview:(id)arg0 ;
-(void)setAlignment:(NSInteger)arg0 ;
-(void)setAxis:(NSInteger)arg0 ;


@end


#endif