// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKFETCHRESTRICTIONSRESULTOBJECT_H
#define CRKFETCHRESTRICTIONSRESULTOBJECT_H

@class CATTaskResultObject, NSDictionary;



@interface CRKFetchRestrictionsResultObject : CATTaskResultObject

@property (copy, nonatomic) NSDictionary *valuesByRestriction; // ivar: _valuesByRestriction


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif