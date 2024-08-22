// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGMIFEATURESTOREGUARDEDDATA_H
#define SGMIFEATURESTOREGUARDEDDATA_H

@class _PASSqliteDatabase, NSMutableSet;

#import <Foundation/Foundation.h>

#import "SGMIDomainCountingTable.h"

@interface SGMIFeatureStoreGuardedData : NSObject {
    _PASSqliteDatabase *_db;
    BOOL _dbIsMigrated;
    NSMutableSet *_columnsToZero;
    SGMIDomainCountingTable *_features;
}






@end


#endif