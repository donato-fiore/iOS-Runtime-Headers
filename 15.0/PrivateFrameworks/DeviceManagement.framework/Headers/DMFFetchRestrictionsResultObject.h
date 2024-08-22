// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DMFFETCHRESTRICTIONSRESULTOBJECT_H
#define DMFFETCHRESTRICTIONSRESULTOBJECT_H

@class CATTaskResultObject, NSDictionary;



@interface DMFFetchRestrictionsResultObject : CATTaskResultObject

@property (readonly, copy, nonatomic) NSDictionary *globalRestrictions; // ivar: _globalRestrictions
@property (readonly, copy, nonatomic) NSDictionary *profileRestrictions; // ivar: _profileRestrictions
@property (readonly, copy, nonatomic) NSDictionary *restrictions; // ivar: _restrictions


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRestrictions:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif