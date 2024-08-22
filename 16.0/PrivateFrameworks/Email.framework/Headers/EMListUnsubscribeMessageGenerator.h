// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EMLISTUNSUBSCRIBEMESSAGEGENERATOR_H
#define EMLISTUNSUBSCRIBEMESSAGEGENERATOR_H


#import <Foundation/Foundation.h>


@interface EMListUnsubscribeMessageGenerator : NSObject



+(id)dateString;
+(id)localizedBodyForCommand:(id)arg0 ;
+(id)messageHeadersWithCommand:(id)arg0 headersFactory:(id)arg1 ;
+(id)senderForCommand:(id)arg0 ;


@end


#endif