// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDTRANSACTIONSTATE_H
#define CKDTRANSACTIONSTATE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "CKDAssetBatch.h"

@interface CKDTransactionState : NSObject

@property (retain, nonatomic) CKDAssetBatch *assetBatch; // ivar: _assetBatch
@property (retain, nonatomic) NSMutableDictionary *itemsByAssetId; // ivar: _itemsByAssetId


-(id)init;


@end


#endif