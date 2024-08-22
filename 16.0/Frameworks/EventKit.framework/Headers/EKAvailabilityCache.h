// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKAVAILABILITYCACHE_H
#define EKAVAILABILITYCACHE_H

@class NSString, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface EKAvailabilityCache : NSObject {
    BOOL _sourceIsInvalid;
    NSString *_accountID;
    BOOL _sourceSupportsAvailabilityRequests;
    NSObject<OS_dispatch_queue> *_processingQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSMutableDictionary *_addressesToCachedSpanRanges;
    NSMutableDictionary *_ignoredEventIDsToAddressBasedCaches;
    NSUInteger _nextRequestID;
    NSUInteger _cancelledID;
}




+(BOOL)_isValidStartDate:(id)arg0 endDate:(id)arg1 ;
+(NSInteger)_convertType:(NSInteger)arg0 ;
+(id)_generateEventKitSpansFromPersistenceSpans:(id)arg0 ;
+(void)_logRequestElapsedTime:(CGFloat)arg0 forNumberOfAddresses:(NSUInteger)arg1 ;
-(BOOL)_validateRequestStartDate:(id)arg0 endDate:(id)arg1 addresses:(id)arg2 error:(*id)arg3 ;
-(id)_cachedSpanResultsBetweenStartDate:(id)arg0 endDate:(id)arg1 ignoredEventID:(id)arg2 addresses:(id)arg3 ;
-(id)_dictionaryForIgnoredEventID:(id)arg0 ;
-(id)cachedAvailabilityInDateRange:(id)arg0 ignoredEventID:(id)arg1 addresses:(id)arg2 ;
-(id)description;
-(id)init;
-(id)initWithSource:(id)arg0 ;
// -(id)requestAvailabilityBetweenStartDate:(id)arg0 endDate:(id)arg1 ignoredEventID:(id)arg2 addresses:(id)arg3 resultsBlock:(id)arg4 completionBlock:(unk)arg5  ;
// -(void)_handleResults:(id)arg0 resultsBlock:(id)arg1 ignoredEventID:(unk)arg2  ;
-(void)cachedAvailabilityInDateRange:(id)arg0 ignoredEventID:(id)arg1 addresses:(id)arg2 results:(id)arg3 ;
-(void)cancelAvailabilityRequestWithID:(id)arg0 ;


@end


#endif