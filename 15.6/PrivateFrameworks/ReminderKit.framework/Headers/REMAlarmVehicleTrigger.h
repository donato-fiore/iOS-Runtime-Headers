// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REMALARMVEHICLETRIGGER_H
#define REMALARMVEHICLETRIGGER_H



#import "REMAlarmTrigger.h"

@interface REMAlarmVehicleTrigger : REMAlarmTrigger

@property (nonatomic) NSInteger event; // ivar: _event


+(BOOL)supportsSecureCoding;
+(id)cdEntityName;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isTemporal;
-(NSUInteger)hash;
-(id)_deepCopy;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEvent:(NSInteger)arg0 ;
-(id)initWithObjectID:(id)arg0 event:(NSInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif