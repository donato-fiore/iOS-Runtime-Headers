// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSDESTINATIONGROUPSESSIONMEMBER_H
#define IDSDESTINATIONGROUPSESSIONMEMBER_H

@class NSString;


#import "IDSDestination.h"
#import "IDSURI.h"

@interface IDSDestinationGroupSessionMember : IDSDestination

@property (readonly, nonatomic) IDSURI *URIObject; // ivar: _URIObject
@property (readonly, nonatomic) BOOL isLightWeight; // ivar: _isLightWeight
@property (readonly, nonatomic) NSString *uri;


+(BOOL)supportsSecureCoding;
-(BOOL)isDevice;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)destinationLightweightStatus;
-(id)destinationURIs;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithURI:(id)arg0 ;
-(id)initWithURI:(id)arg0 isLightWeight:(BOOL)arg1 ;
-(id)initWithURIObject:(id)arg0 isLightWeight:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif