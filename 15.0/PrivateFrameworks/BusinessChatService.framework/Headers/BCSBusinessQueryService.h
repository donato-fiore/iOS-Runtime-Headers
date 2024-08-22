// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BCSBUSINESSQUERYSERVICE_H
#define BCSBUSINESSQUERYSERVICE_H

@class NSDate, NSString;
@protocol BCSXPCDaemonConnectionProtocol;

#import <Foundation/Foundation.h>


@interface BCSBusinessQueryService : NSObject {
    NSDate *_lastTimeoutDate;
    id<BCSXPCDaemonConnectionProtocol> *_connection;
    NSString *_clientBundleIdentifier;
}




-(id)businessItemForPhoneNumber:(id)arg0 isMessageable:(*BOOL)arg1 isChatSuggestVisible:(*BOOL)arg2 error:(*id)arg3 ;
-(id)init;
-(id)initWithConnection:(id)arg0 clientBundleIdentifier:(id)arg1 ;
-(void)_deleteInMemoryCache;
-(void)_isBusinessRegisteredForURL:(id)arg0 chopURL:(BOOL)arg1 completion:(id)arg2 ;
-(void)clearCachesForLinkItemsAssociatedWithBundleID:(id)arg0 completion:(id)arg1 ;
-(void)clearCachesForType:(NSInteger)arg0 completion:(id)arg1 ;
-(void)clearExpiredCachesForType:(NSInteger)arg0 completion:(id)arg1 ;
-(void)fetchBusinessItemWithDetailsForPhoneNumber:(id)arg0 completion:(id)arg1 ;
-(void)fetchBusinessItemWithPhoneNumber:(id)arg0 completion:(id)arg1 ;
-(void)fetchIsBusinessPhoneNumber:(id)arg0 completion:(id)arg1 ;
-(void)fetchLinkItemWithHash:(id)arg0 completion:(id)arg1 ;
-(void)fetchLinkItemWithURL:(id)arg0 chopURL:(BOOL)arg1 completion:(id)arg2 ;
-(void)fetchLinkItemWithURL:(id)arg0 completion:(id)arg1 ;
-(void)fetchSquareIconDataForBusinessItem:(id)arg0 completion:(id)arg1 ;
-(void)isBusinessRegisteredForPhoneNumber:(id)arg0 completion:(id)arg1 ;
-(void)isBusinessRegisteredForURL:(id)arg0 chopURL:(BOOL)arg1 completion:(id)arg2 ;
-(void)isBusinessRegisteredForURL:(id)arg0 completion:(id)arg1 ;
-(void)prefetchBloomFilterAndConfigCacheWithCompletion:(id)arg0 ;
-(void)prefetchConfigCacheWithCompletion:(id)arg0 ;
-(void)warmCacheIfNecessaryForPhoneNumbers:(id)arg0 ;


@end


#endif