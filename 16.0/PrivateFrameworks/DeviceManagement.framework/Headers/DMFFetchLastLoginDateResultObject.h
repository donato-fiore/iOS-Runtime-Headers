// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DMFFETCHLASTLOGINDATERESULTOBJECT_H
#define DMFFETCHLASTLOGINDATERESULTOBJECT_H

@class CATTaskResultObject, NSDictionary;



@interface DMFFetchLastLoginDateResultObject : CATTaskResultObject

@property (readonly, copy, nonatomic) NSDictionary *lastLoginDatesByAppleID; // ivar: _lastLoginDatesByAppleID


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDatesByAppleID:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif