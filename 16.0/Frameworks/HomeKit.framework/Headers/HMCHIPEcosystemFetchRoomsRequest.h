// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMCHIPECOSYSTEMFETCHROOMSREQUEST_H
#define HMCHIPECOSYSTEMFETCHROOMSREQUEST_H



#import "HMCHIPEcosystemRequest.h"
#import "HMMatterHome.h"

@interface HMCHIPEcosystemFetchRoomsRequest : HMCHIPEcosystemRequest

@property (readonly, copy, nonatomic) HMMatterHome *home; // ivar: _home


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)attributeDescriptions;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHome:(id)arg0 ;
-(id)messageType;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif