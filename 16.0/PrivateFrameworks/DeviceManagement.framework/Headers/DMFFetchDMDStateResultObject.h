// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DMFFETCHDMDSTATERESULTOBJECT_H
#define DMFFETCHDMDSTATERESULTOBJECT_H

@class CATTaskResultObject, NSString;



@interface DMFFetchDMDStateResultObject : CATTaskResultObject

@property (copy, nonatomic) NSString *dmdStateDescription; // ivar: _dmdStateDescription


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStateDescription:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif