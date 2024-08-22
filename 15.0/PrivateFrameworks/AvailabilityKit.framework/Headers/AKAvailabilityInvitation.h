// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AKAVAILABILITYINVITATION_H
#define AKAVAILABILITYINVITATION_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface AKAvailabilityInvitation : NSObject

@property (readonly, nonatomic) NSArray *availableDuringActivityIdentifiers; // ivar: _availableDuringActivityIdentifiers


-(id)_payloadDictionary;
-(id)initWithAvailableDuringActivityIdentifiers:(id)arg0 ;
-(id)initWithStatusKitInvitationPayload:(id)arg0 ;
-(id)statusKitInvitationPayloadWithDateCreated:(id)arg0 ;


@end


#endif