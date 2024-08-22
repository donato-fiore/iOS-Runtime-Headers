// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCSYNCUPOPERATIONBUILDER_H
#define BRCSYNCUPOPERATIONBUILDER_H

@class NSMutableSet;

#import <Foundation/Foundation.h>

#import "BRCUserDefaults.h"
#import "BRCSyncUpOperation.h"
#import "BRCAccountSession.h"

@interface BRCSyncUpOperationBuilder : NSObject {
    NSMutableSet *_fullyChainedParentIDWhitelist;
    NSMutableSet *_halfChainedParentIDWhitelist;
}


@property (retain, nonatomic) BRCUserDefaults *defaults; // ivar: _defaults
@property (retain, nonatomic) BRCSyncUpOperation *op; // ivar: _op
@property (retain, nonatomic) BRCAccountSession *session; // ivar: _session


-(BOOL)checkIfSyncAllowedInSharedZoneForItem:(id)arg0 ;
-(float)addDeletionOfAlias:(id)arg0 ;
-(float)addDeletionOfDirectory:(id)arg0 ;
-(float)addDeletionOfDocument:(id)arg0 ;
-(float)addDeletionOfFinderBookmark:(id)arg0 ;
-(float)addDeletionOfItem:(id)arg0 ;
-(float)addDeletionOfRecordID:(id)arg0 ckInfo:(id)arg1 ;
-(float)addDeletionOfSharedTopLevelItem:(id)arg0 ;
-(float)addEditOfDirectory:(id)arg0 ;
-(float)addEditOfDocument:(id)arg0 ;
-(float)addEditOfFinderBookmark:(id)arg0 ;
-(float)addEditOfSharedTopLevelItem:(id)arg0 ;
-(float)addEditOfSymlink:(id)arg0 ;
-(float)addItem:(id)arg0 ;
-(float)fakeSyncForItem:(id)arg0 serverItem:(id)arg1 inZone:(id)arg2 ;
-(id)init;
-(unsigned char)shouldPCSChainStatusForItem:(id)arg0 ;
-(void)handleDeletionOfSharedItem:(id)arg0 ;
-(void)handleEditOfSharedItem:(id)arg0 ;
-(void)prepareAppLibraryRootSyncUpForItem:(id)arg0 ;


@end


#endif