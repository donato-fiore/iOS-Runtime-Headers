// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMCHIPECOSYSTEMCONFIGUREACCESSORYREQUEST_H
#define HMCHIPECOSYSTEMCONFIGUREACCESSORYREQUEST_H

@class NSString;


#import "HMCHIPEcosystemRequest.h"
#import "HMMatterRoom.h"

@interface HMCHIPEcosystemConfigureAccessoryRequest : HMCHIPEcosystemRequest

@property (readonly, copy, nonatomic) NSString *accessoryName; // ivar: _accessoryName
@property (readonly, copy, nonatomic) HMMatterRoom *accessoryRoom; // ivar: _accessoryRoom


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)attributeDescriptions;
-(id)initWithAccessoryName:(id)arg0 accessoryRoom:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)messageType;
-(id)responseWithSuccess;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif