// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DMFFETCHLOCATIONRESULTOBJECT_H
#define DMFFETCHLOCATIONRESULTOBJECT_H

@class CATTaskResultObject, CLLocation;



@interface DMFFetchLocationResultObject : CATTaskResultObject

@property (readonly, copy, nonatomic) CLLocation *location; // ivar: _location


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLocation:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif