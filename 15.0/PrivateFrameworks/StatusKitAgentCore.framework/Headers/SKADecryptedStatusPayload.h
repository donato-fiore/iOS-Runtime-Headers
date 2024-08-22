// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKADECRYPTEDSTATUSPAYLOAD_H
#define SKADECRYPTEDSTATUSPAYLOAD_H

@class SKStatusPayload;

#import <Foundation/Foundation.h>

#import "SKADatabaseReceivedInvitation.h"

@interface SKADecryptedStatusPayload : NSObject

@property (readonly, nonatomic) SKADatabaseReceivedInvitation *invitation; // ivar: _invitation
@property (readonly, nonatomic) SKStatusPayload *statusPayload; // ivar: _statusPayload


-(id)description;
-(id)initWithStatusPayload:(id)arg0 invitation:(id)arg1 ;


@end


#endif