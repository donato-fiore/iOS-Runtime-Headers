// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REMALARMDATETRIGGER_H
#define REMALARMDATETRIGGER_H

@class NSDateComponents;
@protocol NSSecureCoding;


#import "REMAlarmTrigger.h"

@interface REMAlarmDateTrigger : REMAlarmTrigger <NSSecureCoding>



@property (copy, nonatomic) NSDateComponents *dateComponents; // ivar: _dateComponents


+(BOOL)supportsSecureCoding;
+(id)cdEntityName;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isTemporal;
-(NSUInteger)hash;
-(id)_deepCopy;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDateComponents:(id)arg0 ;
-(id)initWithObjectID:(id)arg0 dateComponents:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif