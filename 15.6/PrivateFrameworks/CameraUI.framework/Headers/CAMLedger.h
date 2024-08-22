// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMLEDGER_H
#define CAMLEDGER_H


#import <Foundation/Foundation.h>


@interface CAMLedger : NSObject {
    *ledger_entry_info _ledgerEntries;
    NSInteger _ledgerCount;
    int _footprintLedgerIndex;
}




+(id)sharedInstance;
-(NSInteger)footprint;
-(id)init;
-(void)dealloc;


@end


#endif