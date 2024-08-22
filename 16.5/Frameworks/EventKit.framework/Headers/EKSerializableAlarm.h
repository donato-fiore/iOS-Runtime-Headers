// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKSERIALIZABLEALARM_H
#define EKSERIALIZABLEALARM_H

@class NSDate, NSNumber;


#import "EKSerializableObject.h"

@interface EKSerializableAlarm : EKSerializableObject

@property (copy, nonatomic) NSDate *absoluteDate; // ivar: _absoluteDate
@property (nonatomic) BOOL isAbsolute; // ivar: _isAbsolute
@property (nonatomic) BOOL isDefaultAlarm; // ivar: _isDefaultAlarm
@property (retain, nonatomic) NSNumber *relativeOffset; // ivar: _relativeOffset


+(id)classesForKey;
-(id)createAlarm:(*id)arg0 ;
-(id)initWithAlarm:(id)arg0 ;


@end


#endif