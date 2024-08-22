// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCH3DBARINTERCEPT_H
#define TSCH3DBARINTERCEPT_H


#import <Foundation/Foundation.h>

#import "TSCHChartAxis.h"

@interface TSCH3DBarIntercept : NSObject

@property (readonly, nonatomic) CGFloat value; // ivar: _value
@property (readonly, retain, nonatomic) TSCHChartAxis *valueAxis; // ivar: _valueAxis


+(id)interceptWithValueAxis:(id)arg0 value:(CGFloat)arg1 ;
-(id)initWithValueAxis:(id)arg0 value:(CGFloat)arg1 ;


@end


#endif