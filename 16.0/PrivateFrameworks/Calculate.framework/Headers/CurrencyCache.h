// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CURRENCYCACHE_H
#define CURRENCYCACHE_H

@class NSDate, NSString, NSNumber, NSMutableString, NSMutableDictionary, NSDictionary, NSLock;
@protocol NSXMLParserDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CurrencyCache : NSObject <NSXMLParserDelegate>

 {
    NSDate *_lastRefreshDate;
    NSString *_currentCurrency;
    NSNumber *_currentRate;
    NSMutableString *_currentString;
    NSMutableDictionary *_mutableCurrencyCache;
}


@property (retain, nonatomic) NSDictionary *currencyData; // ivar: _currencyData
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDate *lastRefreshDate;
@property (nonatomic) CGFloat lastRefreshTimeInternal; // ivar: _lastRefreshTimeInternal
@property (retain, nonatomic) NSLock *lock; // ivar: _lock
@property (readonly, nonatomic) BOOL needsRefresh;
@property (nonatomic) CGFloat refreshInterval; // ivar: _refreshInterval
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serializer; // ivar: _serializer
@property (readonly) Class superclass;
@property (nonatomic) CGFloat timeout; // ivar: _timeout
@property (readonly) NSUInteger uuid; // ivar: _uuid


+(id)shared;
-(BOOL)_queue_refresh;
-(BOOL)_queue_refresh:(CGFloat)arg0 ;
-(BOOL)refresh;
-(BOOL)refreshIfNeeded;
-(BOOL)refreshWithTimeOut:(float)arg0 ;
-(BOOL)updateCurrencyCacheWithData:(id)arg0 ;
-(id)_consumerKey;
-(id)_consumerSecret;
-(id)createCredential;
-(id)init;
-(void)_loadPersistedCurrencyCache;
-(void)_queue_persistCurrencyCache;


@end


#endif