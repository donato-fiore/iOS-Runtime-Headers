// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HDSTATICSYNCSTORE_H
#define _HDSTATICSYNCSTORE_H

@class NSUUID, NSString;
@protocol HDSyncStore;

#import <Foundation/Foundation.h>

#import "HDProfile.h"

@interface _HDStaticSyncStore : NSObject <HDSyncStore>

 {
    NSInteger _syncProvenance;
    NSUUID *_storeIdentifier;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) HDProfile *profile; // ivar: _profile
@property (readonly) int protocolVersion;
@property (readonly) Class superclass;
@property (readonly) NSInteger syncStoreType;


-(BOOL)canRecieveSyncObjectsForEntityClass:(Class)arg0 ;
-(BOOL)enforceSyncEntityOrdering;
-(BOOL)shouldContinueAfterAnchorValidationError:(id)arg0 ;
-(BOOL)shouldEnforceSequenceOrdering;
-(BOOL)supportsSpeculativeChangesForSyncEntityClass:(Class)arg0 ;
-(NSInteger)expectedSequenceNumberForSyncEntityClass:(Class)arg0 ;
-(NSInteger)syncEpoch;
-(NSInteger)syncProvenance;
-(id)databaseIdentifier;
-(id)initWithProfile:(id)arg0 storeIdentifier:(id)arg1 error:(*id)arg2 ;
-(id)orderedSyncEntities;
-(id)syncEntityDependenciesForSyncEntity:(Class)arg0 ;
-(id)syncStoreDefaultSourceBundleIdentifier;
-(id)syncStoreIdentifier;
-(void)setExpectedSequenceNumber:(NSInteger)arg0 forSyncEntityClass:(Class)arg1 ;


@end


#endif