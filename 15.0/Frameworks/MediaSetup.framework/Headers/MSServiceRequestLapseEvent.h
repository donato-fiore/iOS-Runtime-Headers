// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MSSERVICEREQUESTLAPSEEVENT_H
#define MSSERVICEREQUESTLAPSEEVENT_H

@class NSDate, NSString;

#import <Foundation/Foundation.h>


@interface MSServiceRequestLapseEvent : NSObject

@property (retain, nonatomic) NSDate *dateOfRequest; // ivar: _dateOfRequest
@property (nonatomic) NSUInteger endTime; // ivar: _endTime
@property (retain, nonatomic) NSDate *recordCreationDate; // ivar: _recordCreationDate
@property (retain, nonatomic) NSString *serviceID; // ivar: _serviceID
@property (nonatomic) NSUInteger timeOfRequest; // ivar: _timeOfRequest


-(CGFloat)durationBetweenRequestAndReadyToUse;
-(CGFloat)durationBetweenRequestAndRecordCreation;
-(id)initWithServiceID:(id)arg0 ;


@end


#endif