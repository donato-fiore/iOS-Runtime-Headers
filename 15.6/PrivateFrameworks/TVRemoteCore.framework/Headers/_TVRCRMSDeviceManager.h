// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TVRCRMSDEVICEMANAGER_H
#define _TVRCRMSDEVICEMANAGER_H


#import <Foundation/Foundation.h>


@interface _TVRCRMSDeviceManager : NSObject



+(id)sharedInstance;
-(id)_allRecords;
-(id)pairingGUIDForNetworkName:(id)arg0 ;
-(void)_addOrUpdateRecordInUserDefaults:(id)arg0 ;
-(void)_performWithMutableRecords:(id)arg0 ;
-(void)_removeRecordWithNetworkNameFromUserDefaults:(id)arg0 ;
-(void)addStoredInfoForNetworkName:(id)arg0 displayName:(id)arg1 pairingGUID:(id)arg2 ;
-(void)removeStoredInfoForNetworkName:(id)arg0 ;


@end


#endif