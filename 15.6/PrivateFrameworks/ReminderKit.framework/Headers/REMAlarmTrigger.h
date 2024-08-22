// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REMALARMTRIGGER_H
#define REMALARMTRIGGER_H

@protocol REMObjectIDProviding, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "REMObjectID.h"

@interface REMAlarmTrigger : NSObject <REMObjectIDProviding, NSSecureCoding>



@property (readonly, nonatomic) BOOL isTemporal;
@property (retain, nonatomic) REMObjectID *objectID; // ivar: _objectID
@property (readonly, nonatomic) REMObjectID *remObjectID;


+(BOOL)supportsSecureCoding;
+(id)cdEntityName;
+(id)newObjectID;
+(id)objectIDWithUUID:(id)arg0 ;
-(BOOL)isContentEqual:(id)arg0 ;
-(id)_deepCopy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithAlarmTrigger:(id)arg0 objectID:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithObjectID:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif