// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CATNOTIFICATIONMESSAGE_H
#define CATNOTIFICATIONMESSAGE_H

@class NSString, NSUUID, NSDictionary;


#import "CATMessage.h"

@interface CATNotificationMessage : CATMessage

@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSUUID *taskUUID; // ivar: _taskUUID
@property (copy, nonatomic) NSDictionary *userInfo; // ivar: _userInfo


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 userInfo:(id)arg1 ;
-(id)initWithTaskUUID:(id)arg0 name:(id)arg1 userInfo:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif