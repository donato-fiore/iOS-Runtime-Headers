// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCDAEMONCONTAINERHELPER_H
#define BRCDAEMONCONTAINERHELPER_H

@class NSSet, NSString;
@protocol BRContainerHelper, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BRCDaemonContainerHelper : NSObject <BRContainerHelper>

 {
    NSSet *_disabledBundleIDs;
    NSSet *_knownBundleIDs;
    int _TCCAccessChangedNotificationToken;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedHelper;
-(BOOL)canFetchAllContainersByID;
-(BOOL)cloudSyncTCCDisabledForContainerMeta:(id)arg0 ;
-(id)_init;
-(id)fetchAllContainersByIDWithError:(*id)arg0 ;
-(id)fetchContainerForMangledID:(id)arg0 personaID:(id)arg1 ;
-(id)itemIDForURL:(id)arg0 error:(*id)arg1 ;
-(unsigned short)br_capabilityToMoveFromLocalItem:(id)arg0 toNewParent:(id)arg1 session:(id)arg2 error:(*id)arg3 ;
-(unsigned short)br_capabilityToMoveFromLookup:(id)arg0 toNewParent:(id)arg1 session:(id)arg2 error:(*id)arg3 ;
-(unsigned short)br_capabilityToMoveFromURL:(id)arg0 toNewParent:(id)arg1 error:(*id)arg2 ;
-(void)_computeTCCEnabledDisabledBundleIdentifiers;
-(void)dealloc;


@end


#endif