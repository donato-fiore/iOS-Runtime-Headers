// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRITASKCONFIGURATION_H
#define SIRITASKCONFIGURATION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SiriTaskConfiguration : NSObject

@property (retain, nonatomic) NSString *eventTime; // ivar: _eventTime
@property (nonatomic) NSInteger minDurationInSeconds; // ivar: _minDurationInSeconds
@property (retain, nonatomic) NSString *taskName; // ivar: _taskName
@property (retain, nonatomic) NSString *taskType; // ivar: _taskType


-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSONData:(id)arg0 ;


@end


#endif