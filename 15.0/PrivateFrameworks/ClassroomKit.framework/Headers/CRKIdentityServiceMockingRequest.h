// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKIDENTITYSERVICEMOCKINGREQUEST_H
#define CRKIDENTITYSERVICEMOCKINGREQUEST_H

@class CATTaskRequest;



@interface CRKIdentityServiceMockingRequest : CATTaskRequest

@property (nonatomic) BOOL shouldDisable; // ivar: _shouldDisable


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif