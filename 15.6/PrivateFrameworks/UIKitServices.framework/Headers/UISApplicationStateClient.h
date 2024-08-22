// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UISAPPLICATIONSTATECLIENT_H
#define UISAPPLICATIONSTATECLIENT_H

@class NSString, BSServiceConnection;
@protocol BSInvalidatable, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface UISApplicationStateClient : NSObject <BSInvalidatable>

 {
    NSString *_bundleIdentifier;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _queue_invalidated;
    BSServiceConnection *_queue_connection;
}


@property (copy, nonatomic) NSString *badgeValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat nextWakeIntervalSinceReferenceDate;
@property (readonly) Class superclass;
@property (nonatomic) BOOL usesBackgroundNetwork;


-(id)_remoteTarget;
-(id)initWithBundleIdentifier:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)setMinimumBackgroundFetchInterval:(CGFloat)arg0 ;


@end


#endif