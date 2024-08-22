// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DMFFETCHUSERSRESULTOBJECT_H
#define DMFFETCHUSERSRESULTOBJECT_H

@class CATTaskResultObject, NSArray;



@interface DMFFetchUsersResultObject : CATTaskResultObject

@property (readonly, copy, nonatomic) NSArray *users; // ivar: _users


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUsers:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif