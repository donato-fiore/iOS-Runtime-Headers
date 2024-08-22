// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACCMEDIALIBRARYUPDATEPLAYLISTCONTENT_H
#define ACCMEDIALIBRARYUPDATEPLAYLISTCONTENT_H

@class NSMutableArray, NSString;

#import <Foundation/Foundation.h>


@interface ACCMediaLibraryUpdatePlaylistContent : NSObject

@property (retain, nonatomic) NSMutableArray *contentList; // ivar: _contentList
@property (nonatomic) int contentStyle; // ivar: _contentStyle
@property (retain, nonatomic) NSString *mediaLibraryUID; // ivar: _mediaLibraryUID
@property (nonatomic) NSUInteger persistentID; // ivar: _persistentID
@property (retain, nonatomic) NSString *revision; // ivar: _revision


-(id)copyContentDictList;
-(id)copyContentList;
-(id)copyDict;
-(id)debugDescription;
-(id)description;
-(id)getContentItemAtIndex:(NSUInteger)arg0 ;
-(id)initWithMediaLibrary:(id)arg0 persistentID:(NSUInteger)arg1 revision:(id)arg2 ;
-(id)initWithMediaLibrary:(id)arg0 revision:(id)arg1 dict:(id)arg2 ;
-(void)addContentItem:(id)arg0 ;
-(void)addContentPersistentID:(NSUInteger)arg0 ;
-(void)iterateContentItems:(id)arg0 ;
-(void)iterateContentPersistentIDs:(id)arg0 ;
-(void)replaceContentItem:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)replaceContentList:(id)arg0 ;
-(void)replaceContentPersistentID:(NSUInteger)arg0 atIndex:(NSUInteger)arg1 ;


@end


#endif