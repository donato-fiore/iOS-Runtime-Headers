// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSCKEVENT_H
#define NSCKEVENT_H

@class NSDate, NSString, NSUUID;


#import "NSManagedObject.h"

@interface NSCKEvent : NSManagedObject

@property (nonatomic) NSInteger cloudKitEventType;
@property (nonatomic) NSInteger countAffectedObjects;
@property (nonatomic) NSInteger countFinishedObjects;
@property (retain, nonatomic) NSDate *endedAt;
@property (nonatomic) NSInteger errorCode;
@property (retain, nonatomic) NSString *errorDomain;
@property (retain, nonatomic) NSUUID *eventIdentifier;
@property (retain, nonatomic) NSDate *startedAt;
@property (nonatomic) BOOL succeeded;


+(id)entityPath;


@end


#endif