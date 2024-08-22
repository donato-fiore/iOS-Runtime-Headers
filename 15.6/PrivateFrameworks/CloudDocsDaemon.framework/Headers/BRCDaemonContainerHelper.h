// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BRCDAEMONCONTAINERHELPER_H
#define BRCDAEMONCONTAINERHELPER_H

@class NSSet, NSString;
@protocol BRContainerHelper;

#import <Foundation/Foundation.h>


@interface BRCDaemonContainerHelper : NSObject <BRContainerHelper>

 {
    NSSet *_disabledBundleIDs;
    NSSet *_knownBundleIDs;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)canFetchAllContainersByID;
-(BOOL)cloudSyncTCCDisabledForContainerMeta:(id)arg0 ;
-(id)fetchAllContainersByIDWithError:(*id)arg0 ;
-(id)fetchContainerForMangledID:(id)arg0 personaID:(id)arg1 ;
-(id)init;
-(id)itemIDForURL:(id)arg0 error:(*id)arg1 ;
-(unsigned short)br_capabilityToMoveFromLookup:(id)arg0 toNewParent:(id)arg1 session:(id)arg2 error:(*id)arg3 ;
-(unsigned short)br_capabilityToMoveFromURL:(id)arg0 toNewParent:(id)arg1 error:(*id)arg2 ;


@end


#endif