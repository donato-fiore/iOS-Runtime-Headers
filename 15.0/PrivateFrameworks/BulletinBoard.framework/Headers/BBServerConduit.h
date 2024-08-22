// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BBSERVERCONDUIT_H
#define BBSERVERCONDUIT_H

@class NSXPCConnection, NSString;
@protocol BBServerConduitClientInterface;

#import <Foundation/Foundation.h>


@interface BBServerConduit : NSObject <BBServerConduitClientInterface>

 {
    NSXPCConnection *_connection;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)clientInterface;
+(id)serverInterface;
+(id)sharedConduit;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)sendMessageToDataProviderSectionID:(id)arg0 name:(id)arg1 userInfo:(id)arg2 ;
-(void)weeAppWithBundleID:(id)arg0 getHiddenFromUser:(id)arg1 ;
-(void)weeAppWithBundleID:(id)arg0 setHiddenFromUser:(BOOL)arg1 ;


@end


#endif