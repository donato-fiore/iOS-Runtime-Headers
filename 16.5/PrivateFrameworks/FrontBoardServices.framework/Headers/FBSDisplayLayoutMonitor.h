// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBSDISPLAYLAYOUTMONITOR_H
#define FBSDISPLAYLAYOUTMONITOR_H

@class BSServiceConnectionEndpoint, NSMapTable, NSString;
@protocol BSInvalidatable;

#import <Foundation/Foundation.h>

#import "_FBSDisplayLayoutServiceAssertion.h"
#import "FBSDisplayLayout.h"

@interface FBSDisplayLayoutMonitor : NSObject <BSInvalidatable>

 {
    os_unfair_lock_s _lock;
    _FBSDisplayLayoutServiceAssertion *_lock_handlerAssertion;
    BOOL _lock_invalidated;
    BSServiceConnectionEndpoint *_deprecated_endpoint;
    id *_lock_deprecated_handler;
    NSMapTable *_lock_deprecated_observerAssertions;
    char _deprecated_qos;
    NSInteger _deprecated_displayType;
    BOOL _deprecated_singleton;
    BOOL _deprecated_mutable;
}


@property (readonly, nonatomic) FBSDisplayLayout *currentLayout;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_endpointForDisplayType:(NSInteger)arg0 ;
+(id)interface;
+(id)mainDisplayInstanceIdentifier;
+(id)monitorWithConfiguration:(id)arg0 ;
+(id)serviceIdentifier;
+(id)sharedMonitorForDisplayType:(NSInteger)arg0 ;
-(NSInteger)displayType;
-(NSUInteger)qualityOfService;
-(id)_initWithConfiguration:(id)arg0 singleton:(BOOL)arg1 needsDefaultPriority:(BOOL)arg2 mutable:(BOOL)arg3 displayType:(NSInteger)arg4 mutableHandler:(id)arg5 ;
-(id)handler:(SEL)arg0 ;
-(id)init;
-(id)initWithDisplayType:(NSInteger)arg0 ;
-(id)initWithDisplayType:(NSInteger)arg0 handler:(id)arg1 ;
-(id)initWithDisplayType:(NSInteger)arg0 qualityOfService:(NSUInteger)arg1 handler:(id)arg2 ;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)removeObserver:(id)arg0 ;
-(void)setHandler:(id)arg0 ;


@end


#endif