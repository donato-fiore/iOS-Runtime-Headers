// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPTCORESTORAGE_H
#define PPTCORESTORAGE_H

@class NSDictionary;

#import <Foundation/Foundation.h>

#import "PPTFlatStorage.h"
#import "PPTSQLStorage.h"

@interface PPTCoreStorage : NSObject

@property (retain) PPTFlatStorage *flatStorage; // ivar: _flatStorage
@property (retain) PPTSQLStorage *sqlStorage; // ivar: _sqlStorage
@property (retain) NSDictionary *storageMap; // ivar: _storageMap


+(id)sharedFlatStorage;
+(id)sharedSQLStorage;
+(id)storageClassForKey:(id)arg0 ;
+(id)storageClassForType:(int)arg0 ;
+(void)setupEntryObjects;
+(void)setupStorage;
+(void)setupStorageVersions;
+(void)startAllStorage;
-(id)init;
-(void)startStorage;


@end


#endif