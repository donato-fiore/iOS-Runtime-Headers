// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLSADMINREQUEST_H
#define CLSADMINREQUEST_H

@class NSString, NSDate;


#import "CLSObject.h"

@interface CLSAdminRequest : CLSObject

@property (nonatomic) NSInteger approval; // ivar: _approval
@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (copy, nonatomic) NSDate *dateCompleted; // ivar: _dateCompleted
@property (copy, nonatomic) NSString *organizationID; // ivar: _organizationID
@property (copy, nonatomic) NSString *requestorID; // ivar: _requestorID
@property (copy, nonatomic) NSString *responderNote; // ivar: _responderNote
@property (nonatomic) NSInteger status; // ivar: _status
@property (nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(NSInteger)approvalFromString:(id)arg0 ;
+(NSInteger)statusFromString:(id)arg0 ;
+(NSInteger)typeFromString:(id)arg0 ;
+(id)_propertyNames;
+(id)stringForApproval:(NSInteger)arg0 ;
+(id)stringForStatus:(NSInteger)arg0 ;
+(id)stringForType:(NSInteger)arg0 ;
-(id)_init;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 ;
-(id)initWithType:(NSInteger)arg0 requestorEmail:(id)arg1 organizationID:(id)arg2 ;
-(id)initWithType:(NSInteger)arg0 requestorID:(id)arg1 organizationID:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)mergeWithObject:(id)arg0 ;


@end


#endif