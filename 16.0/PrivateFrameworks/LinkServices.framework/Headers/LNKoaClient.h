// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LNKOACLIENT_H
#define LNKOACLIENT_H

@class NSString, NSOrderedSet;
@protocol LNVocabularyDonator, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface LNKoaClient : NSObject <LNVocabularyDonator>



@property (readonly, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (retain, nonatomic) NSOrderedSet *currentVocabularySet; // ivar: _currentVocabularySet
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(id)buildKVItemFrom:(id)arg0 ;
-(id)buildKVItemListWithIncrementalIDs:(id)arg0 ;
-(id)getKVItemBuilderFor:(id)arg0 itemId:(id)arg1 ;
-(id)initForBundleIdentifier:(id)arg0 ;
-(void)completeSuccessfully:(id)arg0 ;
-(void)completeWithError:(id)arg0 completion:(id)arg1 ;
-(void)donateFullVocabularySet:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif