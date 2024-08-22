// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BRCPATHTOITEMLOOKUP_H
#define BRCPATHTOITEMLOOKUP_H


#import <Foundation/Foundation.h>

#import "BRCLocalItem.h"
#import "BRCDocumentItem.h"
#import "BRCServerItem.h"
#import "BRCPackageItem.h"
#import "BRCDirectoryItem.h"
#import "BRCClientZone.h"
#import "BRCPQLConnection.h"
#import "BRCRelativePath.h"

@interface BRCPathToItemLookup : NSObject {
    BRCLocalItem *_matchByFileID;
    BRCDocumentItem *_matchByDocumentID;
    BRCLocalItem *_matchByPath;
    BRCServerItem *_serverByPath;
    BRCPackageItem *_packageItem;
    BRCDirectoryItem *_parentItem;
    BRCLocalItem *_matchByFileIDGlobally;
    BRCDocumentItem *_matchByDocumentIDGlobally;
    BRCClientZone *_clientZone;
    ? _fetched;
}


@property (retain, nonatomic) BRCDocumentItem *byDocumentID;
@property (readonly, retain) BRCDocumentItem *byDocumentIDGlobally;
@property (retain, nonatomic) BRCLocalItem *byFileID;
@property (readonly, retain) BRCLocalItem *byFileIDGlobally;
@property (readonly, nonatomic) BRCLocalItem *byPath;
@property (readonly, nonatomic) BRCClientZone *clientZone;
@property (readonly, nonatomic) BRCPQLConnection *db; // ivar: _db
@property (readonly, nonatomic) BRCDirectoryItem *parentItem;
@property (readonly, nonatomic) BRCRelativePath *relpathOfFSEvent; // ivar: _relpathOfFSEvent
@property (readonly, nonatomic) BRCRelativePath *relpathOfItem; // ivar: _pathOfItem
@property (readonly, nonatomic) BRCServerItem *serverByPath;


+(id)lookupForRelativePath:(id)arg0 ;
-(BOOL)_fetchByDocumentID:(BOOL)arg0 ;
-(BOOL)_fetchByFileID:(BOOL)arg0 ;
-(BOOL)_fetchByPath;
-(BOOL)_fetchClientZone;
-(BOOL)_shareIDMatchesParent:(id)arg0 ;
-(id)_byPathWithLastPathComponent:(id)arg0 ;
-(id)_resolveClientZoneWhileFetchingFileID:(BOOL)arg0 fetchindDocID:(BOOL)arg1 ;
-(id)byPathWithLastPathComponent:(id)arg0 ;
-(id)description;
-(id)initWithRelativePath:(id)arg0 ;
-(id)initWithRelativePath:(id)arg0 db:(id)arg1 ;


@end


#endif