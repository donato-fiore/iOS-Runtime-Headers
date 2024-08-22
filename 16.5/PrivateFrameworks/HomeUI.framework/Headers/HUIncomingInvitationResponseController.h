// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUINCOMINGINVITATIONRESPONSECONTROLLER_H
#define HUINCOMINGINVITATIONRESPONSECONTROLLER_H

@class NSError, HMIncomingHomeInvitation;
@protocol HUIncomingInvitationResponseControllerDelegate;

#import <Foundation/Foundation.h>


@interface HUIncomingInvitationResponseController : NSObject

@property (readonly, weak, nonatomic) NSObject<HUIncomingInvitationResponseControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) HMIncomingHomeInvitation *invitation; // ivar: _invitation
@property (nonatomic) NSUInteger response; // ivar: _response
@property (nonatomic) NSUInteger state; // ivar: _state


-(id)_acceptInvitation;
-(id)_declineInvitation;
-(id)_ignoreInvitation;
-(id)_reportJunk;
-(id)init;
-(id)initWithDelegate:(id)arg0 invitation:(id)arg1 ;
-(void)respondToInvitationWithResponse:(NSUInteger)arg0 ;


@end


#endif