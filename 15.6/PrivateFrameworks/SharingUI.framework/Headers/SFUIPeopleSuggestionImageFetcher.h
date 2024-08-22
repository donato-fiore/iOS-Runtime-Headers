// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFUIPEOPLESUGGESTIONIMAGEFETCHER_H
#define SFUIPEOPLESUGGESTIONIMAGEFETCHER_H

@class NSCache, NSMutableDictionary, NSOperationQueue;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SFUIPeopleSuggestionImageFetcher : NSObject

@property (retain, nonatomic) NSCache *cache; // ivar: _cache
@property (retain, nonatomic) NSMutableDictionary *completionHandlers; // ivar: _completionHandlers
@property (retain, nonatomic) NSOperationQueue *fetchQueue; // ivar: _fetchQueue
@property (readonly, nonatomic) NSInteger layoutDirection; // ivar: _layoutDirection
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialAccessQueue; // ivar: _serialAccessQueue
@property (readonly, nonatomic) CGSize targetSize; // ivar: _targetSize


+(id)placeholderImage;
-(id)_onQueue_imageFetchOperationForPeopleSuggestion:(id)arg0 ;
-(id)fetchedImageForPeopleSuggestion:(id)arg0 ;
-(id)initWithTargetSize:(struct CGSize )arg0 layoutDirection:(NSInteger)arg1 ;
-(void)_onQueue_cancelFetchForPeopleSuggestion:(id)arg0 ;
-(void)_onQueue_fetchImageForPeopleSuggestion:(id)arg0 ;
-(void)_onQueue_fetchImageForPeopleSuggestion:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)_onQueue_invokeCompletionHandlersForPeopleSuggestion:(id)arg0 withImage:(id)arg1 ;
-(void)cancelFetchForPeopleSuggestion:(id)arg0 ;
-(void)fetchImageForPeopleSuggestion:(id)arg0 withCompletionHandler:(id)arg1 ;


@end


#endif