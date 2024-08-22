// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TUSUGGESTIONSMETADATACACHEDATAPROVIDER_H
#define TUSUGGESTIONSMETADATACACHEDATAPROVIDER_H

@protocol OS_dispatch_semaphore;


#import "TUMetadataCacheDataProvider.h"

@interface TUSuggestionsMetadataCacheDataProvider : TUMetadataCacheDataProvider

@property (readonly, nonatomic) id *suggestionsContactsObserver; // ivar: _suggestionsContactsObserver
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *suggestionsServiceThrottleSemaphore; // ivar: _suggestionsServiceThrottleSemaphore


+(BOOL)canUseSiriSuggestions;
+(id)newestSuggestedContactForDestinationID:(id)arg0 ;
+(id)sharedService;
+(id)suggestedNamesForDestinationID:(id)arg0 onlySignificant:(BOOL)arg1 error:(*id)arg2 ;
+(void)suggestedNamesForDestinationID:(id)arg0 onlySignificant:(BOOL)arg1 withCompletion:(id)arg2 ;
-(id)init;
-(void)updateCacheWithDestinationIDs:(id)arg0 withGroup:(id)arg1 ;


@end


#endif