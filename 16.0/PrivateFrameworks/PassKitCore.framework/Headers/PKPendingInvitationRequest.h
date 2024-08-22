// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPENDINGINVITATIONREQUEST_H
#define PKPENDINGINVITATIONREQUEST_H


#import <Foundation/Foundation.h>

#import "PKAppletSubcredentialSharingInvitation.h"

@interface PKPendingInvitationRequest : NSObject {
    id *_completion;
}


@property (readonly, nonatomic) PKAppletSubcredentialSharingInvitation *invitation; // ivar: _invitation


-(id)initWithInvitation:(id)arg0 completion:(id)arg1 ;
-(void)invokeCompletionWithInvitation:(id)arg0 error:(id)arg1 ;


@end


#endif