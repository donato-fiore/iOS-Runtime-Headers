// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDOBSERVERQUERYSERVER_H
#define HDOBSERVERQUERYSERVER_H

@class NSNumber, NSSet, NSArray, NSDictionary, NSString;
@protocol HDQuantitySeriesObserver;


#import "HDQueryServer.h"

@interface HDObserverQueryServer : HDQueryServer <HDQuantitySeriesObserver>

 {
    BOOL _deliverOnUnlock;
    BOOL _observeUnfrozenSeries;
    NSNumber *_anchor;
    NSSet *_updatedSampleTypes;
    NSArray *_queryDescriptors;
    NSDictionary *_sampleTypeToFilterMap;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsAnchorBasedAuthorization;
+(Class)queryClass;
+(id)requiredEntitlements;
-(BOOL)_shouldExecuteWhenProtectedDataIsUnavailable;
-(BOOL)_shouldListenForUpdates;
-(id)initWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 ;
-(id)objectTypes;
-(id)transactionalQuantityInsertHandlerForProfile:(SEL)arg0 journaled:(id)arg1 count:(BOOL)arg2 ;
-(void)_queue_start;
-(void)_queue_stop;
-(void)database:(id)arg0 protectedDataDidBecomeAvailable:(BOOL)arg1 ;
-(void)profile:(id)arg0 didDiscardSeriesOfType:(id)arg1 ;
-(void)samplesAdded:(id)arg0 anchor:(id)arg1 ;
-(void)samplesOfTypesWereRemoved:(id)arg0 anchor:(id)arg1 ;


@end


#endif