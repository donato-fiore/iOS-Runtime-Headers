// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICCAMERAFOLDER_H
#define ICCAMERAFOLDER_H

@class NSArray, NSMutableArray;


#import "ICCameraItem.h"

@interface ICCameraFolder : ICCameraItem

@property (readonly, nonatomic) NSArray *contents;
@property (retain) NSMutableArray *files; // ivar: _files
@property os_unfair_lock_s folderMediaLock; // ivar: _folderMediaLock
@property (retain) NSMutableArray *folders; // ivar: _folders


-(BOOL)hasThumbnail;
-(id)description;
-(id)getFileWithID:(NSUInteger)arg0 ;
-(id)getFolderWithID:(NSUInteger)arg0 ;
-(id)initWithName:(id)arg0 parentFolder:(id)arg1 device:(id)arg2 ;
-(id)metadataIfAvailable;
-(id)valueForUndefinedKey:(id)arg0 ;
-(struct CGImage *)largeThumbnailIfAvailable;
-(struct CGImage *)thumbnailIfAvailable;
-(void)addFile:(id)arg0 ;
-(void)addFolder:(id)arg0 ;
-(void)dealloc;
-(void)deleteFile:(id)arg0 ;
-(void)deleteFileWithID:(NSUInteger)arg0 ;
-(void)deleteFolder:(id)arg0 ;
-(void)deleteFolderWithID:(NSUInteger)arg0 ;
-(void)deleteItem:(id)arg0 ;


@end


#endif