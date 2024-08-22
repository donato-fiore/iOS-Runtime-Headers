// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MBPROJECTCLIPSLOADER_H
#define MBPROJECTCLIPSLOADER_H

@class NSMutableArray, NSMutableDictionary;


#import "MBClipsLoader.h"
#import "Project.h"

@interface MBProjectClipsLoader : MBClipsLoader

@property (retain) NSMutableArray *assetURLs; // ivar: _assetURLs
@property (retain) NSMutableDictionary *identifierURLsToClipsMap; // ivar: _identifierURLsToClipsMap
@property (retain, nonatomic) Project *project; // ivar: _project


+(BOOL)clipFormatValid:(id)arg0 validateVideoFormat:(BOOL)arg1 ;
-(NSInteger)countForAllClips;
-(id)clips;
-(id)initWithProject:(id)arg0 showOnlyFavorites:(BOOL)arg1 ;
-(void)dealloc;
-(void)load;
-(void)loadClipAtPath:(id)arg0 ;
-(void)projectDidCleanupUnusedMediaFiles:(id)arg0 ;
-(void)projectDidUndoOrRedo:(id)arg0 ;
-(void)projectMoviesDidChange:(id)arg0 ;
-(void)removeClipWithURL:(id)arg0 ;


@end


#endif