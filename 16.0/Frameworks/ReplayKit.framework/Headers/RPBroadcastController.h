// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RPBROADCASTCONTROLLER_H
#define RPBROADCASTCONTROLLER_H

@class NSString, NSURL, NSDictionary;
@protocol RPBroadcastControllerDelegate;

#import <Foundation/Foundation.h>


@interface RPBroadcastController : NSObject

@property (readonly, nonatomic) NSString *broadcastExtensionBundleID; // ivar: _broadcastExtensionBundleID
@property (retain, nonatomic) NSString *broadcastExtensionBundleIdentifier; // ivar: _broadcastExtensionBundleIdentifier
@property (retain, nonatomic) NSURL *broadcastURL;
@property (readonly, nonatomic, getter=isBroadcasting) BOOL broadcasting;
@property (weak, nonatomic) NSObject<RPBroadcastControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic, getter=isPaused) BOOL paused;
@property (retain, nonatomic) NSDictionary *serviceInfo; // ivar: _serviceInfo


-(id)init;
-(id)initWithCurrentSession;
-(id)initWithExtensionBundleID:(id)arg0 broadcastURL:(id)arg1 ;
-(void)finishBroadcastWithHandler:(id)arg0 ;
-(void)finishSystemBroadcastWithHandler:(id)arg0 ;
-(void)pauseBroadcast;
-(void)resumeBroadcast;
-(void)startBroadcastWithHandler:(id)arg0 ;
-(void)startSystemBroadcastWithHandler:(id)arg0 ;


@end


#endif