// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKAVAILABILITYINVITATION_H
#define AKAVAILABILITYINVITATION_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface AKAvailabilityInvitation : NSObject

@property (readonly, nonatomic) NSArray *availableDuringActivityIdentifiers; // ivar: _availableDuringActivityIdentifiers
@property (readonly, nonatomic) NSArray *unavailableDuringActivityIdentifiers; // ivar: _unavailableDuringActivityIdentifiers


-(id)_payloadDictionary;
-(id)initWithAvailableDuringActivityIdentifiers:(id)arg0 ;
-(id)initWithAvailableDuringActivityIdentifiers:(id)arg0 unavailableDuringActivityIdentifiers:(id)arg1 ;
-(id)initWithStatusKitInvitationPayload:(id)arg0 ;
-(id)statusKitInvitationPayloadWithDateCreated:(id)arg0 ;


@end


#endif