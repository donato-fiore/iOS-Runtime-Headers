// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NLXPCSPELLSERVERCLIENT_H
#define NLXPCSPELLSERVERCLIENT_H

@class NSString, NSXPCConnection;

#import <Foundation/Foundation.h>


@interface NLXPCSpellServerClient : NSObject {
    NSString *_serverName;
    NSXPCConnection *_connection;
    BOOL _invalidated;
}




+(id)spellServerClient;
+(void)requestAssetsForLanguage:(id)arg0 ;
-(BOOL)isValid;
-(id)connection;
-(id)initWithServerName:(id)arg0 ;
-(id)serverName;
-(void)dealloc;
-(void)sendCommand:(id)arg0 ;


@end


#endif