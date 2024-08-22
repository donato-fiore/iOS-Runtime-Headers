// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPECRMESSAGETERMCOUNTSPLUGIN_H
#define PPECRMESSAGETERMCOUNTSPLUGIN_H

@class NSString;
@protocol HVMailConsumer, HVMessagesConsumer;

#import <Foundation/Foundation.h>


@interface PPECRMessageTermCountsPlugin : NSObject <HVMailConsumer, HVMessagesConsumer>

 {
    NSUInteger _maxUniqueTokens;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_stringIdentifierForBundleID:(id)arg0 spotlightIdentifier:(id)arg1 ;
+(id)_stringIdentifierForEvent:(id)arg0 ;
+(id)classLock;
+(id)sharedInstance;
+(void)reduceUnigramCountSetSizeIfNeeded:(id)arg0 maxUniqueTokens:(NSUInteger)arg1 ;
-(id)consumeMailContentWithContext:(id)arg0 ;
-(id)consumeMessagesContentWithContext:(id)arg0 ;
-(id)consumerName;
-(id)deleteDataDerivedFromContentMatchingRequest:(id)arg0 ;
-(id)generateTermCountsFromUnigramCounts:(id)arg0 ;
-(id)init;
-(id)initWithMaxUniqueTokens:(NSUInteger)arg0 ;
-(void)_deleteEventsMatchingTest:(id)arg0 ;
-(void)_sendEvent:(id)arg0 ;
-(void)_updateUnigramCountsFromText:(id)arg0 unigramCounts:(id)arg1 totalTokenCount:(*NSUInteger)arg2 ;


@end


#endif