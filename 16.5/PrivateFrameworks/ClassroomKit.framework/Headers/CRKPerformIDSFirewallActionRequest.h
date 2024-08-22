// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKPERFORMIDSFIREWALLACTIONREQUEST_H
#define CRKPERFORMIDSFIREWALLACTIONREQUEST_H

@class CATTaskRequest, NSSet;



@interface CRKPerformIDSFirewallActionRequest : CATTaskRequest

@property (nonatomic) NSInteger action; // ivar: _action
@property (copy, nonatomic) NSSet *allowedAppleIDs; // ivar: _allowedAppleIDs


+(BOOL)supportsSecureCoding;
+(Class)allowlistedClassForResultObject;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif