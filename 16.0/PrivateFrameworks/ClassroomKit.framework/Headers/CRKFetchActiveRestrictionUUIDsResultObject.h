// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKFETCHACTIVERESTRICTIONUUIDSRESULTOBJECT_H
#define CRKFETCHACTIVERESTRICTIONUUIDSRESULTOBJECT_H

@class CATTaskResultObject, NSSet;



@interface CRKFetchActiveRestrictionUUIDsResultObject : CATTaskResultObject

@property (copy, nonatomic) NSSet *activeRestrictionUUIDs; // ivar: _activeRestrictionUUIDs


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif