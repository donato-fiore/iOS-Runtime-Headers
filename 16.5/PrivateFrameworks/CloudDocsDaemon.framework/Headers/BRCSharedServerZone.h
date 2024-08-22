// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCSHAREDSERVERZONE_H
#define BRCSHAREDSERVERZONE_H

@class NSString;


#import "BRCServerZone.h"
#import "BRCSharedClientZone.h"
#import "BRCSyncContext.h"

@interface BRCSharedServerZone : BRCServerZone {
    NSString *_ownerName;
}


@property (readonly, nonatomic) BRCSharedClientZone *clientZone;
@property (readonly, nonatomic) BOOL isPrivateZone;
@property (readonly, nonatomic) BOOL isSharedZone;
@property (readonly, nonatomic) BRCSyncContext *transferSyncContext;
@property (readonly, nonatomic) BRCSyncContext *transferSyncContextIfExists;


-(BOOL)_propagateFolderDeletesToTheirChildren;
-(BOOL)allocateRanksWhenCaughtUp:(BOOL)arg0 ;
-(BOOL)validateItemsLoggingToFile:(struct __sFILE *)arg0 db:(id)arg1 ;
-(BOOL)validateStructureLoggingToFile:(struct __sFILE *)arg0 db:(id)arg1 ;
-(NSInteger)_propagateDeleteToChildrenOfItemID:(id)arg0 ;
-(id)asSharedZone;
-(id)initWithMangledID:(id)arg0 dbRowID:(id)arg1 plist:(id)arg2 session:(id)arg3 ;
-(id)ownerName;
-(void)addForegroundClient:(id)arg0 ;
-(void)removeForegroundClient:(id)arg0 ;
-(void)sideCarZoneWasReset;


@end


#endif