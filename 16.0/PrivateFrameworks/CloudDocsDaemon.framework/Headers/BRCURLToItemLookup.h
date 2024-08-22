// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRCURLTOITEMLOOKUP_H
#define BRCURLTOITEMLOOKUP_H

@class NSString, NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "BRCRelativePath.h"
#import "BRCLocalItem.h"
#import "BRCServerItem.h"
#import "BRCPQLConnection.h"
#import "BRCDocumentItem.h"
#import "BRCAccountSession.h"

@interface BRCURLToItemLookup : NSObject <NSSecureCoding>

 {
    ? _hasFetched;
    BRCRelativePath *__relpath;
    BOOL _allowAppLibraryRoot;
}


@property (readonly, nonatomic) NSUInteger byIDDiffs; // ivar: _byIDDiffs
@property (readonly, nonatomic) BRCLocalItem *byIDLocalItem; // ivar: _byIDLocalItem
@property (readonly, nonatomic) ? byIDMatch;
@property (readonly, nonatomic) BRCServerItem *byIDServerItem; // ivar: _byIDServerItem
@property (readonly, nonatomic) NSUInteger byPathDiffs; // ivar: _byPathDiffs
@property (readonly, nonatomic) BRCLocalItem *byPathLocalItem; // ivar: _byPathLocalItem
@property (readonly, nonatomic) ? byPathMatch;
@property (readonly, nonatomic) BRCRelativePath *byPathRelpath;
@property (readonly, nonatomic) BRCServerItem *byPathServerItem; // ivar: _byPathServerItem
@property (readonly, nonatomic) BRCPQLConnection *db; // ivar: _db
@property (readonly, nonatomic) NSUInteger faultedDiffs; // ivar: _faultedDiffs
@property (readonly, nonatomic) BRCDocumentItem *faultedLocalItem; // ivar: _faultedLocalItem
@property (readonly, nonatomic) ? faultedMatch;
@property (readonly, nonatomic) BRCRelativePath *faultedRelpath; // ivar: _faultedRelpath
@property (readonly, nonatomic) BRCServerItem *faultedServerItem; // ivar: _faultedServerItem
@property (readonly, nonatomic) NSString *filename; // ivar: _filename
@property (readonly, nonatomic) BRCLocalItem *parentItem; // ivar: _parentItem
@property (readonly, nonatomic) NSString *parentPath; // ivar: _parentPath
@property (readonly, nonatomic) BRCRelativePath *parentRelpath; // ivar: _parentRelpath
@property (readonly, nonatomic) unsigned short pathType;
@property (readonly, nonatomic) BRCRelativePath *relpath;
@property (readonly, nonatomic) BRCLocalItem *reservedLocalItem; // ivar: _reservedLocalItem
@property (readonly, nonatomic) ? reservedMatch;
@property (readonly, nonatomic) BRCServerItem *reservedServerItem; // ivar: _reservedServerItem
@property (readonly, nonatomic) BRCAccountSession *session; // ivar: _session
@property (readonly, nonatomic) NSURL *url; // ivar: _url


+(BOOL)supportsSecureCoding;
-(BOOL)_appliedOrDownloadContentIfNecessary:(id)arg0 si:(id)arg1 applySchedulerState:(*int)arg2 ;
-(BOOL)_applyOrDownloadThumbnailIfNecessary:(id)arg0 si:(id)arg1 url:(id)arg2 updatedAddition:(*BOOL)arg3 applySchedulerState:(*int)arg4 ;
-(BOOL)_applyOrEvictLosersIfNecessary:(id)arg0 si:(id)arg1 url:(id)arg2 addedLosers:(id)arg3 removedLosers:(id)arg4 updatedAddition:(*BOOL)arg5 applySchedulerState:(*int)arg6 ;
-(BOOL)_bounceBouncesHiddenByFault:(id)arg0 ;
-(BOOL)_bouncePathMatchIfNecessaryWithLookup:(id)arg0 localItem:(id)arg1 serverItem:(id)arg2 bounceNamespace:(unsigned char)arg3 applyNamespace:(unsigned char)arg4 ;
-(BOOL)_canUpdatePathMatch:(struct ? *)arg0 hasAdditionsToApply:(BOOL)arg1 ;
-(BOOL)_removeDirectory:(id)arg0 atPath:(id)arg1 error:(*id)arg2 ;
-(BOOL)copyItemAtURLToGenstore:(id)arg0 forItem:(id)arg1 error:(*id)arg2 ;
-(BOOL)resolveAndKeepOpenWithError:(*id)arg0 ;
-(BOOL)resolveParentAndKeepOpenMustExist:(BOOL)arg0 errcode:(*int)arg1 ;
-(BOOL)trashItemIfNecessary:(id)arg0 atURL:(id)arg1 error:(*id)arg2 ;
-(BOOL)tryToDeleteItemInNamespace:(unsigned char)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithURL:(id)arg0 allowAppLibraryRoot:(BOOL)arg1 session:(id)arg2 ;
-(id)initWithURL:(id)arg0 allowAppLibraryRoot:(BOOL)arg1 session:(id)arg2 db:(id)arg3 ;
-(id)initWithURL:(id)arg0 session:(id)arg1 ;
-(struct ? )_pathMatchInNamespace:(unsigned char)arg0 ;
-(void)_clearNamespace:(unsigned char)arg0 ;
-(void)_fetchFaultedMatch;
-(void)_fetchIDMatch;
-(void)_fetchPathMatch;
-(void)_fetchRelPath;
-(void)_fetchReservedPathMatch;
-(void)_moveMissingItemAsideInNamespace:(unsigned char)arg0 ;
-(void)clearByIDItem;
-(void)clearByPathItem;
-(void)clearFaultedItem;
-(void)clearReservedItem;
-(void)closePaths;
-(void)didApplyChangesAtPath:(id)arg0 filename:(id)arg1 li:(id)arg2 si:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)handleReservedPathMatchesIfNeeded;
-(void)markPathMatchLostIfLocationDoesntMatch:(struct ? *)arg0 ;
-(void)matchLookupItemsWithDisk;
-(void)refreshByIDDiffs;
-(void)refreshByPathDiffs;
-(void)refreshFaultedDiffs;
-(void)tryToUpdateItemInNamespace:(unsigned char)arg0 withDstLookup:(id)arg1 ;


@end


#endif