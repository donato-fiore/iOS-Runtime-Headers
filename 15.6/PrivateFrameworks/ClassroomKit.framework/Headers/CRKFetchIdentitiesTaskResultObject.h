// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKFETCHIDENTITIESTASKRESULTOBJECT_H
#define CRKFETCHIDENTITIESTASKRESULTOBJECT_H

@class CATTaskResultObject, NSDictionary;



@interface CRKFetchIdentitiesTaskResultObject : CATTaskResultObject

@property (copy, nonatomic) NSDictionary *courseIdentityInfosByGroupIdentifier; // ivar: _courseIdentityInfosByGroupIdentifier


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif