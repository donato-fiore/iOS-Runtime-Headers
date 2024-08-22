// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _LSSPRINGBOARDCALL_H
#define _LSSPRINGBOARDCALL_H

@class NSString, NSXPCConnection, NSDictionary, BSServiceConnectionEndpoint;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _LSSpringBoardCall : NSObject <NSCopying>

 {
    NSString *_schemeIfNotFileURL;
}


@property (copy) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property BOOL callCompletionHandlerWhenFullyComplete; // ivar: _callCompletionHandlerWhenFullyComplete
@property (retain) NSXPCConnection *clientXPCConnection; // ivar: _clientXPCConnection
@property (copy) NSDictionary *launchOptions; // ivar: _launchOptions
@property (retain) BSServiceConnectionEndpoint *targetServiceConnectionEndpoint; // ivar: _targetServiceConnectionEndpoint


+(id)springBoardDeadlockPreventionQueue;
+(id)springBoardQueue;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(void)callSpringBoardWithCompletionHandler:(id)arg0 ;
-(void)callWithCompletionHandler:(id)arg0 ;
-(void)lieWithCompletionHandler:(id)arg0 ;
-(void)promptAndCallSpringBoardWithCompletionHandler:(id)arg0 ;


@end


#endif