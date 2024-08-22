// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PARSESSIONSWIFTINTERNAL_H
#define PARSESSIONSWIFTINTERNAL_H

@class NSSet, NSXPCConnection;
@protocol PARSessionDelegate;

#import <Foundation/Foundation.h>

#import "PARBag.h"
#import "_TtC10CoreParsec15PARSearchClient.h"
#import "PARSessionConfiguration.h"

@interface PARSessionSwiftInternal : NSObject {
    ? lock;
    ? fileManager;
    ? _configuration;
    ? mapsListener;
    ? _bag;
    ? _sampled;
    ? _sampleClientTimingEventAllowlist;
    ? _allowedAppsForSiriSuggestions;
    ? activityMonitor;
    ? skappToken;
    ? _delegate;
    ? session;
}


@property (nonatomic, copy) NSSet *allowedAppsForSiriSuggestions;
@property (nonatomic, retain) PARBag *bag;
@property (nonatomic, readonly) _TtC10CoreParsec15PARSearchClient *client; // ivar: client
@property (nonatomic, retain) PARSessionConfiguration *configuration;
@property (nonatomic, readonly) NSXPCConnection *connection;
@property (nonatomic, retain) NSObject<PARSessionDelegate> *delegate;
@property (nonatomic, readonly) NSUInteger enabledStatus;


-(id)init;
-(id)initWithSession:(id)arg0 configuration:(id)arg1 connection:(id)arg2 delegate:(id)arg3 ;
-(id)taskWith:(id)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)fileHandleAndAttributesForResource:(id)arg0 completion:(id)arg1 ;
-(void)loadWithTask:(id)arg0 ;
-(void)sendCBAEngagementFeedback:(id)arg0 query:(NSUInteger)arg1 ;
-(void)start;


@end


#endif