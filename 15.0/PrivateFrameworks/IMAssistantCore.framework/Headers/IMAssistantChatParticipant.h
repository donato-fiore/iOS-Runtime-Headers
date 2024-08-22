// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMASSISTANTCHATPARTICIPANT_H
#define IMASSISTANTCHATPARTICIPANT_H

@class IMHandle;

#import <Foundation/Foundation.h>

#import "IMAssistantHandleFromContact.h"

@interface IMAssistantChatParticipant : NSObject

@property (readonly, nonatomic) IMAssistantHandleFromContact *handleFromContact; // ivar: _handleFromContact
@property (readonly, nonatomic) IMHandle *imHandle; // ivar: _imHandle


-(id)description;
-(id)initWithIMHandle:(id)arg0 handleFromContact:(id)arg1 ;


@end


#endif