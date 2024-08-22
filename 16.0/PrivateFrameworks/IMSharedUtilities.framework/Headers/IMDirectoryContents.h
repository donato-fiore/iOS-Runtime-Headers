// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMDIRECTORYCONTENTS_H
#define IMDIRECTORYCONTENTS_H

@class NSSet, NSArray, NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface IMDirectoryContents : NSObject

@property (retain, nonatomic) NSSet *allPaths; // ivar: _allPaths
@property (retain, nonatomic) NSArray *attachmentPaths; // ivar: _attachmentPaths
@property (readonly, nonatomic) NSString *attachmentsPath; // ivar: _attachmentsPath
@property (retain, nonatomic) NSDictionary *fileInfoMap; // ivar: _fileInfoMap
@property (readonly, nonatomic) NSString *rootPath; // ivar: _rootPath
@property (retain, nonatomic) NSArray *sortedPaths; // ivar: _sortedPaths
@property (readonly, nonatomic) NSString *stickersPath; // ivar: _stickersPath
@property (retain, nonatomic) NSArray *topLevelPaths; // ivar: _topLevelPaths


+(BOOL)isGroupPhotoPath:(id)arg0 ;
-(BOOL)isAttachmentPath:(id)arg0 ;
-(BOOL)isStickerPath:(id)arg0 ;
-(id)initWithRootPath:(id)arg0 attachmentsPath:(id)arg1 stickersPath:(id)arg2 ;
-(void)gather;
-(void)recursivelyGatherFileInfoAtPath:(id)arg0 fileInfoMap:(id)arg1 ;


@end


#endif