// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NWINBOUNDMESSAGE_H
#define NWINBOUNDMESSAGE_H

@class NSData;


#import "NWMessage.h"

@interface NWInboundMessage : NWMessage

@property (readonly, nonatomic) NSData *content;




@end


#endif