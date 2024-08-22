// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RMSPAIRINGRECORDSTORE_H
#define RMSPAIRINGRECORDSTORE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface RMSPairingRecordStore : NSObject {
    NSMutableDictionary *_pairingRecords;
}




+(id)sharedRecordStore;
-(id)allPairingRecords;
-(id)init;
-(id)pairedServiceNetworkNames;
-(id)pairingRecordForServiceWithNetworkName:(id)arg0 ;
-(void)_synchronizePreferences;
-(void)removePairingRecordForServiceWithNetworkName:(id)arg0 ;
-(void)savePairingRecord:(id)arg0 forServiceWithNetworkName:(id)arg1 ;


@end


#endif