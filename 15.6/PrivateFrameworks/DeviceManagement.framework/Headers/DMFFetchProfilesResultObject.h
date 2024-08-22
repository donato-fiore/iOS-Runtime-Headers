// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DMFFETCHPROFILESRESULTOBJECT_H
#define DMFFETCHPROFILESRESULTOBJECT_H

@class CATTaskResultObject, NSArray;



@interface DMFFetchProfilesResultObject : CATTaskResultObject

@property (readonly, copy, nonatomic) NSArray *profiles; // ivar: _profiles


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProfiles:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif