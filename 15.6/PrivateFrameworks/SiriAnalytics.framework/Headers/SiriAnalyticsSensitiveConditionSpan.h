// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRIANALYTICSSENSITIVECONDITIONSPAN_H
#define SIRIANALYTICSSENSITIVECONDITIONSPAN_H


#import <Foundation/Foundation.h>


@interface SiriAnalyticsSensitiveConditionSpan : NSObject {
    BOOL _hasStartedAtValue;
    BOOL _hasEndedAtValue;
}


@property (nonatomic) NSUInteger conditionType; // ivar: _conditionType
@property (nonatomic) NSUInteger endedAt; // ivar: _endedAt
@property (nonatomic) NSUInteger startedAt; // ivar: _startedAt


-(BOOL)containsTimestamp:(NSUInteger)arg0 ;
-(id)initWithConditionType:(NSUInteger)arg0 startedAt:(NSUInteger)arg1 ;


@end


#endif