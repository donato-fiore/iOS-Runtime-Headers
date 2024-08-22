// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UNSNOTIFICATIONSCHEDULE_H
#define UNSNOTIFICATIONSCHEDULE_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface UNSNotificationSchedule : NSObject

@property (retain, nonatomic) NSDate *previousTriggerDate; // ivar: _previousTriggerDate


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_dateFormatter;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg0 ;


@end


#endif