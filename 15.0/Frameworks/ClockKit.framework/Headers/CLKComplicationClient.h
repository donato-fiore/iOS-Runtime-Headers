// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLKCOMPLICATIONCLIENT_H
#define CLKCOMPLICATIONCLIENT_H

@class NSXPCConnection, NSHashTable, NSLock, NSSet, NSString, NSNumber;
@protocol CLKComplicationServer, CLKComplicationDataSource, CLKComplicationClientDelegate;

#import <Foundation/Foundation.h>


@interface CLKComplicationClient : NSObject <CLKComplicationServer, CLKComplicationDataSource>

 {
    NSXPCConnection *_connection;
    NSHashTable *_invalidationObservers;
    NSLock *_invalidationObserversLock;
    BOOL _invalidated;
}


@property (copy, nonatomic) NSSet *activeComplications; // ivar: _activeComplications
@property (copy, nonatomic) id *checkinHandler; // ivar: _checkinHandler
@property (readonly, nonatomic) NSString *clientBundlePath; // ivar: _clientBundlePath
@property (readonly, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CLKComplicationClientDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (readonly, nonatomic) NSNumber *pid; // ivar: _pid
@property (readonly) Class superclass;


-(id)initWithConnection:(id)arg0 ;
-(void)_handleConnectionInvalidated;
-(void)addInvalidationObserver:(id)arg0 ;
-(void)checkinWithClientIdentifier:(id)arg0 bundlePath:(id)arg1 ;
-(void)extendTimelineForComplication:(id)arg0 ;
-(void)getAlwaysOnTemplateForComplication:(id)arg0 withHandler:(id)arg1 ;
-(void)getComplicationDescriptorsWithHandler:(id)arg0 ;
-(void)getCurrentTimelineEntryForComplication:(id)arg0 withHandler:(id)arg1 ;
-(void)getLocalizableSampleTemplateForComplication:(id)arg0 withHandler:(id)arg1 ;
-(void)getNextRequestedUpdateDateWithHandler:(id)arg0 ;
-(void)getPrivacyBehaviorForComplication:(id)arg0 withHandler:(id)arg1 ;
-(void)getTimelineAnimationBehaviorForComplication:(id)arg0 withHandler:(id)arg1 ;
-(void)getTimelineEndDateForComplication:(id)arg0 withHandler:(id)arg1 ;
-(void)getTimelineEntriesForComplication:(id)arg0 afterDate:(id)arg1 limit:(NSUInteger)arg2 withHandler:(id)arg3 ;
-(void)handleSharedComplicationDescriptors:(id)arg0 ;
-(void)invalidate;
-(void)reloadComplicationDescriptors;
-(void)reloadTimelineForComplication:(id)arg0 ;
-(void)removeInvalidationObserver:(id)arg0 ;
-(void)requestedUpdateBudgetExhausted;
-(void)requestedUpdateDidBegin;


@end


#endif