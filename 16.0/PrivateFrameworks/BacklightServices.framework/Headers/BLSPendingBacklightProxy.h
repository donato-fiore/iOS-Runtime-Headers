// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLSPENDINGBACKLIGHTPROXY_H
#define BLSPENDINGBACKLIGHTPROXY_H

@class NSMutableArray, NSHashTable, NSString;
@protocol BLSBacklightProxy;

#import <Foundation/Foundation.h>


@interface BLSPendingBacklightProxy : NSObject <BLSBacklightProxy>

 {
    NSMutableArray *_requests;
    NSHashTable *_observers;
    id<BLSBacklightProxy> *_replacementBacklightProxy;
    os_unfair_lock_s _lock;
    NSInteger _backlightState;
}


@property (readonly, nonatomic, getter=isAlwaysOnEnabled) BOOL alwaysOnEnabled;
@property (readonly, nonatomic) NSInteger backlightState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger flipbookState;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isTransitioning) BOOL transitioning;


-(id)init;
-(id)performChangeRequest:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)replaceWithBacklightProxy:(id)arg0 ;


@end


#endif