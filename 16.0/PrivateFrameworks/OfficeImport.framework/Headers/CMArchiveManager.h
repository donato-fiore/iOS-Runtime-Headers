// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CMARCHIVEMANAGER_H
#define CMARCHIVEMANAGER_H

@class NSMutableDictionary, NSString, NSMutableSet, NSCache;
@protocol TCCancelDelegate;

#import <Foundation/Foundation.h>


@interface CMArchiveManager : NSObject <TCCancelDelegate>

 {
    BOOL mIsThumbnail;
    BOOL mIsOnPhone;
    NSUInteger mPageCount;
    NSMutableDictionary *mDrawableCache;
    NSString *mResourcePathPrefix;
    NSMutableSet *mPausedPaths;
    int mHeight;
    int mWidth;
    CGFloat mCommitInterval;
    BOOL mAutoCommit;
    NSCache *mStyleObjectCache;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property BOOL noDecorations; // ivar: _noDecorations
@property (copy) NSString *passphrase; // ivar: mPassphrase
@property (readonly) Class superclass;


+(id)resourceTypeToExtension:(int)arg0 ;
+(id)resourceTypeToMIME:(int)arg0 ;
+(int)blipTypeToResourceType:(int)arg0 ;
-(BOOL)isCancelled;
-(BOOL)isOnPhone;
-(BOOL)isProgressive;
-(BOOL)isThumbnail;
-(BOOL)progressiveMappingIsPausedOnPath:(id)arg0 ;
-(NSUInteger)pageCount;
-(NSUInteger)resourceCount;
-(id)_validateData:(id)arg0 withType:(*int)arg1 ;
-(id)addCssStyle:(id)arg0 ;
-(id)addResource:(id)arg0 withName:(id)arg1 type:(int)arg2 ;
-(id)addResource:(id)arg0 withType:(int)arg1 ;
-(id)addResourceForDrawable:(id)arg0 withType:(int)arg1 drawable:(id)arg2 ;
-(id)addStyle:(id)arg0 ;
-(id)appendResourcePathToName:(id)arg0 ;
-(id)cachedPathForDrawable:(id)arg0 ;
-(id)copyResourceWithName:(id)arg0 type:(int)arg1 ;
-(id)copyResourceWithType:(int)arg0 ;
-(id)cssStylesheetString;
-(id)init;
-(id)resourcePathPrefix;
-(void)addCssStyle:(id)arg0 withName:(id)arg1 ;
-(void)closeResourceAtPath:(id)arg0 ;
-(void)commitDataAtPath:(id)arg0 ;
-(void)pauseProgressiveMappingOnPath:(id)arg0 ;
-(void)pushCssToPath:(id)arg0 ;
-(void)pushData:(id)arg0 toPath:(id)arg1 ;
-(void)pushText:(id)arg0 toPath:(id)arg1 ;
-(void)restartProgressiveMappingOnPath:(id)arg0 ;
-(void)setAutoCommit:(BOOL)arg0 ;
-(void)setCommitInterval:(CGFloat)arg0 ;
-(void)setHTMLHeight:(int)arg0 ;
-(void)setHTMLWidth:(int)arg0 ;
-(void)setIsOnPhone:(BOOL)arg0 ;
-(void)setIsThumbnail:(BOOL)arg0 ;
-(void)setPageCount:(NSUInteger)arg0 ;
-(void)setResourcePathPrefix:(id)arg0 ;


@end


#endif