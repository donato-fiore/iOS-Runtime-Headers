// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EVENTDESCRIPTION_H
#define EVENTDESCRIPTION_H

@class NSDate, NSString, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface EventDescription : NSObject

@property (readonly, nonatomic) ? auditToken; // ivar: _auditToken
@property (readonly, nonatomic) char * bundleId; // ivar: _bundleId
@property (readonly, nonatomic) NSDate *creationTimeStamp; // ivar: _creationTimeStamp
@property (readonly, nonatomic) *void eventData; // ivar: _eventData
@property (retain, nonatomic) NSString *eventKey; // ivar: _eventKey
@property (readonly, nonatomic) NSInteger eventLen; // ivar: _eventLen
@property (readonly, nonatomic) NSMutableDictionary *eventQualifiers; // ivar: _eventQualifiers
@property (readonly, nonatomic) int eventType; // ivar: _eventType
@property (readonly, nonatomic) NSUInteger processId; // ivar: _processId
@property (readonly, nonatomic) char * processName; // ivar: _processName
@property (readonly, nonatomic) BOOL verifiedDelegateSymptom; // ivar: _verifiedDelegateSymptom


-(char *)originatorForLogging;
-(id)description;
-(id)eventQualifierStringForKey:(id)arg0 ;
-(id)initWithType:(int)arg0 length:(NSInteger)arg1 data:(*void)arg2 fromAuditToken:(struct ? )arg3 fromPid:(NSUInteger)arg4 named:(char *)arg5 bundleId:(char *)arg6 verifiedDelegateSymptom:(BOOL)arg7 ;
-(id)initWithType:(int)arg0 length:(NSInteger)arg1 data:(*void)arg2 fromPid:(NSUInteger)arg3 named:(char *)arg4 bundleId:(char *)arg5 ;
-(void)dealloc;


@end


#endif