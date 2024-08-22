// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKPERMANENTEVENTSTORE_H
#define CKPERMANENTEVENTSTORE_H

@protocol CKPermanentWritableEventStore, CKPermanentReadableEventStore, CKPermanentEventStorePrivate;

#import <Foundation/Foundation.h>

#import "CKKnowledgeStore.h"

@interface CKPermanentEventStore : NSObject <CKPermanentWritableEventStore, CKPermanentReadableEventStore, CKPermanentEventStorePrivate>

 {
    ? knowledgeStore;
}


@property (nonatomic, readonly) CKKnowledgeStore *backingStore;


+(id)createEventWithIdentifier:(id)arg0 dateInterval:(id)arg1 metadata:(id)arg2 fromEvent:(id)arg3 ;
+(id)defaultStore;
-(BOOL)deleteEventWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(BOOL)deleteInteractionsWithBundleId:(id)arg0 error:(*id)arg1 ;
-(BOOL)recordEvent:(id)arg0 error:(*id)arg1 ;
-(BOOL)recordInteraction:(id)arg0 bundleId:(id)arg1 error:(*id)arg2 ;
-(BOOL)recordInteraction:(id)arg0 error:(*id)arg1 ;
-(id)historicEventsAndReturnError:(*id)arg0 ;
-(id)init;
-(id)initWithKnowledgeStore:(id)arg0 ;
-(void)deleteEventWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)deleteInteractionsWithBundleId:(id)arg0 completionHandler:(id)arg1 ;
-(void)historicEventWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)historicEventsWithCompletionHandler:(id)arg0 ;
-(void)historicEventsWithSourceBundleIdentifier:(id)arg0 andIntent:(id)arg1 completionHandler:(id)arg2 ;
-(void)recordEvent:(id)arg0 completionHandler:(id)arg1 ;
-(void)recordInteraction:(id)arg0 bundleId:(id)arg1 completionHandler:(id)arg2 ;
-(void)recordInteraction:(id)arg0 completionHandler:(id)arg1 ;
-(void)setFirstSeen:(id)arg0 forEventWithIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)setFrequency:(NSInteger)arg0 forEventWithIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)setLastDuration:(CGFloat)arg0 forEventWithIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)setLastSeen:(id)arg0 forEventWithIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)setTotalDuration:(CGFloat)arg0 forEventWithIdentifier:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif