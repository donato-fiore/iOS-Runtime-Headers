// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CONVERSATIONFOOTERVIEWDISPLAYMETRICS_H
#define CONVERSATIONFOOTERVIEWDISPLAYMETRICS_H


#import <Foundation/Foundation.h>


@interface ConversationFooterViewDisplayMetrics : NSObject

@property (nonatomic) CGFloat toolbarHeight; // ivar: _toolbarHeight
@property (nonatomic) CGFloat topToBaseline; // ivar: _topToBaseline
@property (nonatomic) BOOL usePhoneLandscapeSymbolConfiguration; // ivar: _usePhoneLandscapeSymbolConfiguration


+(id)displayMetricsWithSafeAreaInsets:(struct UIEdgeInsets )arg0 interfaceOrientation:(NSInteger)arg1 traitCollection:(id)arg2 ;


@end


#endif