// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHPLUGINHELPER_H
#define CHPLUGINHELPER_H

@class NSXPCConnection, NSXPCInterface;

#import <Foundation/Foundation.h>


@interface CHPluginHelper : NSObject {
    NSXPCConnection *_connection;
    NSXPCInterface *_interface;
}




-(NSUInteger)unreadCallCountWithError:(*id)arg0 ;
-(id)init;
-(id)recentCallsWithLimitingTypes:(unsigned int)arg0 error:(*id)arg1 ;
-(void)recentCallsWithLimitingTypes:(unsigned int)arg0 completionHandler:(id)arg1 ;
-(void)unreadCallCountWithCompletionHandler:(id)arg0 ;


@end


#endif