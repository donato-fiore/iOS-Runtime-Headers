// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC9TEACHARTSP33_9EE3010B3705A23DEDCE010A1E35708921LINESERIESDATAELEMENT_H
#define _TTC9TEACHARTSP33_9EE3010B3705A23DEDCE010A1E35708921LINESERIESDATAELEMENT_H

@class UIAccessibilityElement, NSString;



@interface _TtC9TeaChartsP33_9EE3010B3705A23DEDCE010A1E35708921LineSeriesDataElement : UIAccessibilityElement {
    ? seriesElement;
    ? cachedLabel;
    ? cachedValue;
}


@property (nonatomic) CGRect accessibilityFrame;
@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic, copy) NSString *accessibilityValue;


-(id)init;
-(id)initWithAccessibilityContainer:(id)arg0 ;


@end


#endif