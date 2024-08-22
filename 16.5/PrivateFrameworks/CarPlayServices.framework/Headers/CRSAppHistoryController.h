// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRSAPPHISTORYCONTROLLER_H
#define CRSAPPHISTORYCONTROLLER_H

@class BSServiceConnection, NSString;
@protocol CARAppHistoryServerToClientInterface, BSInvalidatable, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CRSAppHistoryController : NSObject <CARAppHistoryServerToClientInterface, BSInvalidatable>



@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (retain, nonatomic) BSServiceConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)availableFeatureKeys;
-(id)init;
-(void)addAnalyticsValues:(id)arg0 completion:(id)arg1 ;
-(void)fetchSessionEchoContextsWithCompletion:(id)arg0 ;
-(void)fetchSessionFeatureKeysWithCompletion:(id)arg0 ;
-(void)fetchSessionUIContextsWithCompletion:(id)arg0 ;
-(void)fetchUIContextsWithCompletion:(id)arg0 ;
-(void)invalidate;
-(void)setSessionFeatureKeys:(id)arg0 completion:(id)arg1 ;


@end


#endif