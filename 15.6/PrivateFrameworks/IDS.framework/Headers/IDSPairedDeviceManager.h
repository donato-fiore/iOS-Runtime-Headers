// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IDSPAIREDDEVICEMANAGER_H
#define IDSPAIREDDEVICEMANAGER_H

@class NSSet, NSString;
@protocol IDSDaemonListenerProtocol;

#import <Foundation/Foundation.h>

#import "_IDSCompletionHandler.h"
#import "IDSXPCDaemonController.h"

@interface IDSPairedDeviceManager : NSObject <IDSDaemonListenerProtocol>

 {
    _IDSCompletionHandler *_deleteCompletion;
    _IDSCompletionHandler *_localCompletion;
    _IDSCompletionHandler *_pairedCompletion;
    _IDSCompletionHandler *_deliveryStatsCompletion;
    NSSet *_allowedTrafficClassifiers;
}


@property (retain, nonatomic) NSSet *allowedTrafficClassifiers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) IDSXPCDaemonController *xpcDaemonController; // ivar: _xpcDaemonController


+(id)sharedInstance;
-(id)init;
-(void)constructRAResponseDictionary:(id)arg0 completionHandler:(id)arg1 ;
-(void)dealloc;
// -(void)deletePairedDevice:(id)arg0 withCompletionBlock:(id)arg1 queue:(unk)arg2  ;
-(void)deliveryStats:(id)arg0 ;
-(void)device:(id)arg0 pairingDeleted:(BOOL)arg1 ;
-(void)dropAllMessagesWithoutAnyAllowedClassifier;
// -(void)getDeliveryStatsWithCompletionBlock:(id)arg0 queue:(unk)arg1  ;
// -(void)getLocalDeviceInfoWithCompletionBlock:(id)arg0 queue:(unk)arg1  ;
// -(void)getPairedDeviceInfoWithCompletionBlock:(id)arg0 queue:(unk)arg1  ;
-(void)setPairedDeviceInfo:(id)arg0 ;


@end


#endif