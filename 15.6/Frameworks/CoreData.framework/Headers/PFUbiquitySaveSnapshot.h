// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PFUBIQUITYSAVESNAPSHOT_H
#define PFUBIQUITYSAVESNAPSHOT_H

@class NSDate, NSString, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface PFUbiquitySaveSnapshot : NSObject {
    NSDate *_transactionDate;
    NSString *_modelVersionHash;
    NSString *_exportingPeerID;
    NSString *_localPeerID;
    NSMutableDictionary *_storeNameToStoreSaveSnapshots;
}




-(id)description;
-(id)initWithSaveNotification:(id)arg0 withLocalPeerID:(id)arg1 ;
-(id)initWithTransactionLog:(id)arg0 ;
-(void)dealloc;


@end


#endif