// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRUPDATECLIENTMESSAGE_H
#define MRUPDATECLIENTMESSAGE_H



#import "MRProtocolMessage.h"
#import "MRClient.h"

@interface MRUpdateClientMessage : MRProtocolMessage

@property (readonly, nonatomic) MRClient *client;


-(NSUInteger)type;
-(id)initWithClient:(id)arg0 ;


@end


#endif