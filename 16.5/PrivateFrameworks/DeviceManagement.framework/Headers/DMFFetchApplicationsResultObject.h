// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DMFFETCHAPPLICATIONSRESULTOBJECT_H
#define DMFFETCHAPPLICATIONSRESULTOBJECT_H

@class CATTaskResultObject, NSDictionary;



@interface DMFFetchApplicationsResultObject : CATTaskResultObject

@property (readonly, copy, nonatomic) NSDictionary *applicationsByIdentifier; // ivar: _applicationsByIdentifier


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithApplicationsByIdentifier:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif