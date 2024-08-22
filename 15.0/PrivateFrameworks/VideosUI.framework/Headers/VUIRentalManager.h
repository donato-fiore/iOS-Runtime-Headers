// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUIRENTALMANAGER_H
#define VUIRENTALMANAGER_H

@class NSString, NSMutableSet;
@protocol MPStoreDownloadManagerObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface VUIRentalManager : NSObject <MPStoreDownloadManagerObserver>



@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableSet *deferredRentalCheckinContexts; // ivar: _deferredRentalCheckinContexts
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL initialRentalsFetched; // ivar: _initialRentalsFetched
@property (nonatomic) BOOL initialized; // ivar: _initialized
@property (nonatomic) BOOL needToSendPlaybackStartDatesToServer; // ivar: _needToSendPlaybackStartDatesToServer
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)_init;
-(void)_activeAccountDidChange:(id)arg0 ;
-(void)_checkInRentalsNeedingCheckIn;
-(void)_didFetchInitialDownloads:(id)arg0 ;
-(void)_networkReachbilityDidChange:(id)arg0 ;
-(void)_sendPlaybackStartDatesToServerIfNecessary;
-(void)checkInRentalWithID:(id)arg0 dsid:(id)arg1 completion:(id)arg2 ;
-(void)checkOutRentalWithID:(id)arg0 dsid:(id)arg1 checkoutType:(NSUInteger)arg2 startPlaybackClock:(BOOL)arg3 completion:(id)arg4 ;
-(void)dealloc;
-(void)downloadManager:(id)arg0 downloadDidFinish:(id)arg1 ;
-(void)initializeRentals;


@end


#endif