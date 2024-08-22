// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKFETCHLASTLOGINDATEREQUEST_H
#define CRKFETCHLASTLOGINDATEREQUEST_H

@class CATTaskRequest, NSSet;



@interface CRKFetchLastLoginDateRequest : CATTaskRequest

@property (copy, nonatomic) NSSet *appleIDs; // ivar: _appleIDs


+(BOOL)supportsSecureCoding;
+(Class)allowlistedClassForResultObject;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif