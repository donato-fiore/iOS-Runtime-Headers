// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALWIDGETUTILS_H
#define CALWIDGETUTILS_H


#import <Foundation/Foundation.h>


@interface CalWidgetUtils : NSObject



+(CGFloat)lookaheadIntervalForDaysPerEntry:(NSInteger)arg0 ;
+(void)_refreshWidgetKinds:(id)arg0 reason:(id)arg1 ;
+(void)refreshDateWidgets;
+(void)refreshEventWidgets;


@end


#endif