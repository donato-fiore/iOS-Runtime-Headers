// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKPERFORMIDSFIREWALLACTIONRESULTOBJECT_H
#define CRKPERFORMIDSFIREWALLACTIONRESULTOBJECT_H

@class CATTaskResultObject, NSSet;



@interface CRKPerformIDSFirewallActionResultObject : CATTaskResultObject

@property (copy, nonatomic) NSSet *allowedAppleIDs; // ivar: _allowedAppleIDs


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif