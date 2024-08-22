// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ADATTRIBUTIONREQUESTER_H
#define ADATTRIBUTIONREQUESTER_H

@class NSString, NSXPCConnection, NSNumber;
@protocol ADAttribution_XPC;

#import <Foundation/Foundation.h>


@interface ADAttributionRequester : NSObject <ADAttribution_XPC>



@property (retain, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (retain, nonatomic) NSNumber *transactionToken; // ivar: _transactionToken


-(BOOL)_isAppTrackingAuthorized;
-(BOOL)productionClient;
-(id)currentRecord:(*id)arg0 ;
-(id)initWithConnection:(id)arg0 bundleID:(id)arg1 transactionID:(id)arg2 ;
-(int)appRunState;
-(void)_clearDownloadDataFromRequest:(id)arg0 ;
-(void)attachDownloadDataTo:(id)arg0 forAdamID:(id)arg1 ;
-(void)attachSearchMetadataTo:(id)arg0 forAdamID:(id)arg1 ;
-(void)beginAttributionRequest:(id)arg0 reason:(id)arg1 completionHandler:(id)arg2 ;
-(void)makeAttributionRequestWithObject:(id)arg0 andHandler:(id)arg1 ;
-(void)overrideAttributionData:(id)arg0 ;
-(void)requestAttributionDetails:(id)arg0 ;
-(void)requestAttributionDetailsWithBlock:(id)arg0 ;
-(void)setServerToTest:(NSInteger)arg0 ;
-(void)setStocksAdEnabled:(BOOL)arg0 ;


@end


#endif