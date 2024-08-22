// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SYBACKLINKINDICATORUSAGE_H
#define SYBACKLINKINDICATORUSAGE_H


#import <Foundation/Foundation.h>


@interface SYBacklinkIndicatorUsage : NSObject



+(id)_identifierFromUserActivity:(id)arg0 ;
+(id)_listenerEndpoint;
+(id)_proxyWithError:(*id)arg0 ;
+(void)_assumeEndpoint:(id)arg0 ;
+(void)didActivateBacklinkItemWithIdentifier:(id)arg0 ;
+(void)didActivateBacklinkItemWithUserActivity:(id)arg0 ;
+(void)didDismissBacklinkItemWithUserActivity:(id)arg0 ;
+(void)set_listenerEndpoint:(id)arg0 ;


@end


#endif