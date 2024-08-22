// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BRCSYMLINKITEM_H
#define BRCSYMLINKITEM_H

@class BRCDirectoryItem<BRCFSRooted>, NSString;


#import "BRCLocalItem.h"
#import "BRCAliasItem.h"
#import "BRCDirectoryItem.h"
#import "BRCDocumentItem.h"

@interface BRCSymlinkItem : BRCLocalItem

@property (readonly, nonatomic) BRCAliasItem *asBRAlias;
@property (readonly, nonatomic) BRCDirectoryItem *asDirectory;
@property (readonly, nonatomic) BRCDocumentItem *asDocument;
@property (readonly, nonatomic) BRCDirectoryItem<BRCFSRooted> *asFSRoot;
@property (readonly, nonatomic) NSString *symlinkTarget; // ivar: _symlinkTarget


-(BOOL)_insertInDB:(id)arg0 dbRowID:(NSUInteger)arg1 ;
-(BOOL)_updateInDB:(id)arg0 diffs:(NSUInteger)arg1 ;
-(BOOL)isSymLink;
-(NSUInteger)diffAgainstLocalItem:(id)arg0 ;
-(NSUInteger)diffAgainstServerItem:(id)arg0 ;
-(id)_initFromPQLResultSet:(id)arg0 session:(id)arg1 db:(id)arg2 error:(*id)arg3 ;
-(id)_initWithLocalItem:(id)arg0 ;
-(id)_initWithServerItem:(id)arg0 dbRowID:(NSUInteger)arg1 ;
-(id)asSymlink;
-(id)descriptionWithContext:(id)arg0 ;
-(void)readTargetFromRelativePathAndSyncUp:(id)arg0 ;


@end


#endif