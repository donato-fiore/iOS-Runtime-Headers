// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BRCSERVERITEM_H
#define BRCSERVERITEM_H

@class NSString, BRCUserRowID, BRServerMetrics;
@protocol BRCItem;

#import <Foundation/Foundation.h>

#import "BRCServerZone.h"
#import "BRCPQLConnection.h"
#import "BRFieldCKInfo.h"
#import "BRCSharedServerItem.h"
#import "BRCClientZone.h"
#import "BRCItemGlobalID.h"
#import "BRCItemID.h"
#import "BRCVersion.h"
#import "BRCAccountSession.h"
#import "BRCServerStatInfo.h"

@interface BRCServerItem : NSObject <BRCItem>

 {
    BRCServerZone *_zone;
    BRCPQLConnection *_db;
    BRFieldCKInfo *_sideCarCKInfo;
    BOOL _needsInsert;
    unsigned int _pcsChainState;
}


@property (readonly, nonatomic) BRCSharedServerItem *asSharedItem;
@property (readonly, nonatomic) BRCClientZone *clientZone; // ivar: _clientZone
@property (readonly, nonatomic) NSInteger directoryMtime; // ivar: _directoryMtime
@property (readonly, nonatomic) BOOL hasShareIDAndIsOwnedByMe;
@property (readonly, nonatomic) BOOL isBRAlias;
@property (readonly, nonatomic) BOOL isChildSharedItem;
@property (readonly, nonatomic) BOOL isDead;
@property (readonly, nonatomic) BOOL isDirectory;
@property (readonly, nonatomic) BOOL isDirectoryFault;
@property (readonly, nonatomic) BOOL isDocument;
@property (readonly, nonatomic) BOOL isFSRoot;
@property (readonly, nonatomic) BOOL isFinderBookmark;
@property (readonly, nonatomic) BOOL isLive;
@property (readonly, nonatomic) BOOL isOwnedByMe;
@property (readonly, nonatomic) BOOL isPackage;
@property (readonly, nonatomic) BOOL isShared;
@property (readonly, nonatomic) BOOL isSharedByMe;
@property (readonly, nonatomic) BOOL isSharedToMe;
@property (readonly, nonatomic) BOOL isSharedToMeChildItem;
@property (readonly, nonatomic) BOOL isSharedToMeTopLevelItem;
@property (readonly, nonatomic) BOOL isSymLink;
@property (readonly, nonatomic) BOOL isTopLevelSharedItem;
@property (readonly, nonatomic) BOOL isZoneRoot;
@property (readonly, nonatomic) BRCItemGlobalID *itemGlobalID;
@property (readonly, nonatomic) BRCItemID *itemID; // ivar: _itemID
@property (readonly, nonatomic) BRCVersion *latestVersion; // ivar: _latestVersion
@property (readonly, nonatomic) NSString *originalName; // ivar: _originalName
@property (readonly, nonatomic) BRCUserRowID *ownerKey; // ivar: _ownerKey
@property (readonly, nonatomic) NSInteger rank; // ivar: _rank
@property (readonly, nonatomic) BRServerMetrics *serverMetrics; // ivar: _serverMetrics
@property (readonly, nonatomic) BRCServerZone *serverZone; // ivar: _serverZone
@property (readonly, nonatomic) BRCAccountSession *session; // ivar: _session
@property (nonatomic) NSUInteger sharingOptions; // ivar: _sharingOptions
@property (readonly, nonatomic) BRCServerStatInfo *st; // ivar: _st
@property (readonly, nonatomic) NSString *symlinkTarget; // ivar: _symlinkTarget


+(BOOL)supportsSecureCoding;
-(BOOL)canPathMatchMergeWithLocalItem:(id)arg0 ;
-(BOOL)shouldBeGreedyForApply;
-(BOOL)validateLoggingToFile:(struct __sFILE *)arg0 ;
-(NSUInteger)diffAgainstServerItem:(id)arg0 ;
-(id)aliasTargetAppLibrary;
-(id)aliasTargetClientZone;
-(id)aliasTargetItemID;
-(id)appLibraryForRootItem;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionWithContext:(id)arg0 ;
-(id)initFromPQLResultSet:(id)arg0 serverZone:(id)arg1 error:(*id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithServerItem:(id)arg0 ;
-(id)newLocalItemWithServerZone:(id)arg0 dbRowID:(NSUInteger)arg1 ;
-(id)parentItemIDOnFS;
-(id)parentItemIDOnServer;
-(id)parentItemOnFS;
-(id)parentLocalItemOnFS;
-(id)parentZoneOnFS;
-(id)sideCarInfo;
-(unsigned int)pcsChainState;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif