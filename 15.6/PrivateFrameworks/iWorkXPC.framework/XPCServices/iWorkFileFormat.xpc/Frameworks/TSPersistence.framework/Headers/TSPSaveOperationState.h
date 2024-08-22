// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSPSAVEOPERATIONSTATE_H
#define TSPSAVEOPERATIONSTATE_H

@class NSMapTable, NSHashTable;

#import <Foundation/Foundation.h>


@interface TSPSaveOperationState : NSObject {
    NSMapTable *_newDataStorages;
    NSHashTable *_remoteData;
    NSMapTable *_saveOperationStatesForRemoteStorages;
}


@property (readonly, nonatomic) BOOL hasRemoteData;
@property (readonly, nonatomic) BOOL inheritAttributes;
@property (readonly, nonatomic) BOOL isSavingCurrentDocument;
@property (nonatomic) int sampleID; // ivar: _sampleID
@property (readonly, nonatomic) BOOL shouldUpdate;
@property (readonly, nonatomic) NSInteger updateType; // ivar: _updateType


-(BOOL)hasNewStorageForData:(id)arg0 ;
-(id)init;
-(id)initWithUpdateType:(NSInteger)arg0 ;
-(id)saveOperationStateForRemoteStorage:(id)arg0 ;
-(void)addNewPackageDataStorage:(id)arg0 forRemoteDataStorage:(id)arg1 changeCount:(NSUInteger)arg2 ;
-(void)addNewStorage:(id)arg0 forData:(id)arg1 ;
-(void)addRemoteData:(id)arg0 ;
-(void)enumerateDataAndStoragesUsingBlock:(id)arg0 ;
-(void)enumerateRemoteDataUsingBlock:(id)arg0 ;


@end


#endif