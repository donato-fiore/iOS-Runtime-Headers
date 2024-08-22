// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IDSDESTINATIONGROUPSESSIONMEMBER_H
#define IDSDESTINATIONGROUPSESSIONMEMBER_H

@class NSString;


#import "IDSDestination.h"

@interface IDSDestinationGroupSessionMember : IDSDestination

@property (readonly, nonatomic) BOOL isLightWeight; // ivar: _isLightWeight
@property (readonly, nonatomic) NSString *uri; // ivar: _uri


+(BOOL)supportsSecureCoding;
-(BOOL)isDevice;
-(id)description;
-(id)destinationLightweightStatus;
-(id)destinationURIs;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithURI:(id)arg0 ;
-(id)initWithURI:(id)arg0 isLightWeight:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif