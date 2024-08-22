// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMCHIPECOSYSTEMFETCHROOMSRESPONSE_H
#define HMCHIPECOSYSTEMFETCHROOMSRESPONSE_H

@class NSArray;


#import "HMCHIPEcosystemResponse.h"
#import "HMMatterRoom.h"

@interface HMCHIPEcosystemFetchRoomsResponse : HMCHIPEcosystemResponse

@property (readonly, copy, nonatomic) NSArray *rooms; // ivar: _rooms
@property (readonly, nonatomic) HMMatterRoom *suggestedRoom; // ivar: _suggestedRoom


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)attributeDescriptions;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRooms:(id)arg0 suggestion:(id)arg1 ;
-(id)messageType;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif