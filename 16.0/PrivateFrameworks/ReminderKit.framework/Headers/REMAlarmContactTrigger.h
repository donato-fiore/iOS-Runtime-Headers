// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REMALARMCONTACTTRIGGER_H
#define REMALARMCONTACTTRIGGER_H

@protocol NSSecureCoding;


#import "REMAlarmTrigger.h"
#import "REMContactRepresentation.h"

@interface REMAlarmContactTrigger : REMAlarmTrigger <NSSecureCoding>



@property (readonly, nonatomic) REMContactRepresentation *contactRepresentation; // ivar: _contactRepresentation


+(BOOL)supportsSecureCoding;
+(id)cdEntityName;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isTemporal;
-(NSUInteger)hash;
-(id)_deepCopy;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContactRepresentation:(id)arg0 ;
-(id)initWithObjectID:(id)arg0 contactRepresentation:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif