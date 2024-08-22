// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKFETCHLOGEVENTSRESULTOBJECT_H
#define CRKFETCHLOGEVENTSRESULTOBJECT_H

@class CATTaskResultObject, NSDate, NSString;


#import "CRKEventLog.h"

@interface CRKFetchLogEventsResultObject : CATTaskResultObject

@property (retain, nonatomic) NSDate *currentDate; // ivar: _currentDate
@property (retain, nonatomic) CRKEventLog *eventLog; // ivar: _eventLog
@property (copy, nonatomic) NSString *sessionToken; // ivar: _sessionToken


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif