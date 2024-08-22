// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICCAMERAFOLDER_H
#define ICCAMERAFOLDER_H

@class NSArray, NSMutableArray;


#import "ICCameraItem.h"

@interface ICCameraFolder : ICCameraItem {
    os_unfair_lock_s _filesLock;
    os_unfair_lock_s _foldersLock;
}


@property (readonly, nonatomic) NSArray *contents;
@property (retain, nonatomic) NSMutableArray *files; // ivar: _files
@property (retain, nonatomic) NSMutableArray *folders; // ivar: _folders


-(BOOL)containsItem:(id)arg0 ;
-(BOOL)hasThumbnail;
-(id)description;
-(id)initWithName:(id)arg0 parentFolder:(id)arg1 device:(id)arg2 ;
-(id)metadata;
-(id)valueForUndefinedKey:(id)arg0 ;
-(struct CGImage *)thumbnail;
-(void)addFile:(id)arg0 ;
-(void)addFolder:(id)arg0 ;
-(void)dealloc;
-(void)deleteFile:(id)arg0 ;
-(void)deleteFolder:(id)arg0 ;
-(void)deleteItem:(id)arg0 ;
-(void)lockFiles;
-(void)lockFolders;
-(void)requestMetadata;
-(void)requestThumbnail;
-(void)unlockFiles;
-(void)unlockFolders;


@end


#endif