// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKIMESSAGESGATEKEEPERPAYLOAD_H
#define SKIMESSAGESGATEKEEPERPAYLOAD_H

@class NSString;

#import <Foundation/Foundation.h>

#import "SKIDirectInvocationPayload.h"

@interface SKIMessagesGatekeeperPayload : NSObject

@property (copy) NSString *appBundleId; // ivar: _appBundleId
@property (readonly, retain) SKIDirectInvocationPayload *invocationPayload;


+(BOOL)supports:(id)arg0 ;
-(id)initWithAppBundleId:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif