// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSMPCONVERSATIONGROUPSPONSORPAIR_H
#define IDSMPCONVERSATIONGROUPSPONSORPAIR_H

@class NSString;

#import <Foundation/Foundation.h>

#import "IDSMPConversationKey.h"

@interface IDSMPConversationGroupSponsorPair : NSObject

@property (readonly, nonatomic) IDSMPConversationKey *conversationKey; // ivar: _conversationKey
@property (readonly, nonatomic) NSString *sponsorAlias; // ivar: _sponsorAlias


-(id)initWithConversationKey:(id)arg0 sponsorAlias:(id)arg1 ;


@end


#endif