// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIMEDIASTARTTIMEINFO_H
#define VUIMEDIASTARTTIMEINFO_H

@class NSString, NSNumber, NSDate;

#import <Foundation/Foundation.h>


@interface VUIMediaStartTimeInfo : NSObject

@property (retain, nonatomic) NSString *source; // ivar: _source
@property (retain, nonatomic) NSNumber *startTime; // ivar: _startTime
@property (retain, nonatomic) NSDate *timestamp; // ivar: _timestamp
@property (nonatomic) NSInteger type; // ivar: _type


-(id)description;
-(id)initWithStartTime:(id)arg0 timestamp:(id)arg1 type:(NSInteger)arg2 source:(id)arg3 ;


@end


#endif