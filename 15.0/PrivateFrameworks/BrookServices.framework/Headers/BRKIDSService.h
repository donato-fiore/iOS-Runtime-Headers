// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRKIDSSERVICE_H
#define BRKIDSSERVICE_H

@class NSString, IDSService;
@protocol IDSServiceDelegate, OS_dispatch_queue, BRKIDSServiceCompanionContextManagerDelegate, BRKIDSServiceContextManagerDelegate, BRKIDSServiceCompanionDataCollectionDelegate;

#import <Foundation/Foundation.h>


@interface BRKIDSService : NSObject <IDSServiceDelegate>

 {
    NSObject<OS_dispatch_queue> *_idsQueue;
}


@property (weak, nonatomic) NSObject<BRKIDSServiceCompanionContextManagerDelegate> *companionContextManagerDelegate; // ivar: _companionContextManagerDelegate
@property (weak, nonatomic) NSObject<BRKIDSServiceContextManagerDelegate> *contextManagerDelegate; // ivar: _contextManagerDelegate
@property (weak, nonatomic) NSObject<BRKIDSServiceCompanionDataCollectionDelegate> *dataCollectionDelegate; // ivar: _dataCollectionDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) IDSService *idsService; // ivar: _idsService
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)init;
// -(id)sendProtobuf:(id)arg0 type:(unsigned short)arg1 priority:(NSInteger)arg2 completionHandler:(id)arg3 withTimeout:(unk)arg4  ;
// -(id)sendResourceAtURL:(id)arg0 metadata:(id)arg1 priority:(NSInteger)arg2 completionHandler:(id)arg3 withTimeout:(unk)arg4  ;
-(void)locationManagerDidEnterRegion:(id)arg0 ;
-(void)locationManagerDidExitRegion:(id)arg0 ;
-(void)locationManagerStartMonitoringForRegion:(id)arg0 ;
-(void)locationManagerStopMonitoringForRegion:(id)arg0 ;
-(void)service:(id)arg0 account:(id)arg1 identifier:(id)arg2 didSendWithSuccess:(BOOL)arg3 error:(id)arg4 ;
-(void)service:(id)arg0 account:(id)arg1 incomingResourceAtURL:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)service:(id)arg0 account:(id)arg1 incomingUnhandledProtobuf:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)service:(id)arg0 activeAccountsChanged:(id)arg1 ;
-(void)service:(id)arg0 devicesChanged:(id)arg1 ;


@end


#endif