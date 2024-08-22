// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRIANALYTICSSENSITIVECONDITIONSLEDGER_H
#define SIRIANALYTICSSENSITIVECONDITIONSLEDGER_H


#import <Foundation/Foundation.h>


@interface SiriAnalyticsSensitiveConditionsLedger : NSObject {
    ? spans;
    ? clockIdentifier;
    ? bootSessionUUID;
    ? metastore;
}




-(id)init;
-(id)initWithClockIdentifier:(id)arg0 metastore:(id)arg1 ;
-(id)processWithNanosecondsSinceBoot:(NSUInteger)arg0 tlut:(id)arg1 ;
-(void)endWithSensitiveCondition:(int)arg0 at:(NSUInteger)arg1 ;
-(void)startWithSensitiveCondition:(int)arg0 at:(NSUInteger)arg1 ;


@end


#endif