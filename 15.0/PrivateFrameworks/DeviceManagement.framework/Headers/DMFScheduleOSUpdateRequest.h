// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DMFSCHEDULEOSUPDATEREQUEST_H
#define DMFSCHEDULEOSUPDATEREQUEST_H

@class NSString;


#import "DMFTaskRequest.h"

@interface DMFScheduleOSUpdateRequest : DMFTaskRequest

@property (nonatomic) NSUInteger action; // ivar: _action
@property (copy, nonatomic) NSString *productKey; // ivar: _productKey
@property (copy, nonatomic) NSString *productVersion; // ivar: _productVersion
@property (nonatomic) BOOL useDelay; // ivar: _useDelay


+(BOOL)_action:(*NSUInteger)arg0 fromString:(id)arg1 ;
+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
+(BOOL)supportsSecureCoding;
+(Class)whitelistedClassForResultObject;
+(id)_descriptionForAction:(NSUInteger)arg0 ;
+(id)permittedPlatforms;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif