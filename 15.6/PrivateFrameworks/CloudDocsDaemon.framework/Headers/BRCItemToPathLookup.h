// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BRCITEMTOPATHLOOKUP_H
#define BRCITEMTOPATHLOOKUP_H

@class NSURL;

#import <Foundation/Foundation.h>

#import "BRCLocalItem.h"
#import "BRCServerItem.h"
#import "BRCServerZone.h"
#import "BRCRelativePath.h"
#import "BRCAppLibrary.h"

@interface BRCItemToPathLookup : NSObject {
    BRCLocalItem *_item;
    BRCServerItem *_serverItem;
    BRCServerZone *_serverZone;
    BRCRelativePath *_parentPath;
    BRCRelativePath *_matchByFileID;
    BRCRelativePath *_matchByDocumentID;
    BRCRelativePath *_matchByPath;
    NSUInteger _parentFileID;
    BOOL _fileSystemIDMayStillExist;
    BOOL _cleanupFaults;
    ? _fetched;
}


@property (readonly, nonatomic) BRCRelativePath *byFileSystemID;
@property (readonly, nonatomic) BRCRelativePath *byPath;
@property (readonly, nonatomic) NSURL *coordinatedReadURL;
@property (readonly, nonatomic) BRCAppLibrary *coordinatedURLAppLibrary;
@property (readonly, nonatomic) NSURL *coordinatedWriteURL;
@property (readonly, nonatomic) BOOL fileSystemIDMayStillExist;
@property (readonly, nonatomic) BRCRelativePath *parentPath;


+(id)lookupForItem:(id)arg0 ;
+(id)lookupForServerItem:(id)arg0 cleanupFaults:(BOOL)arg1 ;
-(BOOL)_fetchByDocumentID;
-(BOOL)_fetchByFileID;
-(BOOL)_fetchByPath;
-(BOOL)computeLogicalPath:(*id)arg0 physicalPath:(*id)arg1 isDirectory:(*BOOL)arg2 ;
-(id)description;
-(id)initWithItem:(id)arg0 ;
-(id)initWithServerItem:(id)arg0 cleanupFaults:(BOOL)arg1 ;
-(void)_fetchParent;
-(void)closePaths;
-(void)dealloc;


@end


#endif