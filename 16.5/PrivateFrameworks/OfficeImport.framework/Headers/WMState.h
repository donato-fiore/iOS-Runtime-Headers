// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WMSTATE_H
#define WMSTATE_H

@class NSMutableDictionary, NSMutableArray;


#import "CMState.h"
#import "CMOutlineState.h"
#import "WDText.h"

@interface WMState : CMState {
    CMOutlineState *currentListState;
    CMOutlineState *outlineState;
    NSMutableDictionary *listStates;
    WDText *mLastHeader;
    WDText *mLastFooter;
    unsigned int mCurrentPage;
    NSUInteger mBlockIndex;
    NSUInteger mRunIndex;
    float mTopMargin;
    float mLeftMargin;
    float mPageHeight;
    BOOL mIsFrame;
    BOOL mIsFrameStart;
    BOOL mIsFrameEnd;
    BOOL mIsHeaderOrFooter;
    float mTotalPageHeight;
}


@property (retain) NSMutableArray *paragraphStack; // ivar: _paragraphStack


-(BOOL)containsParagraph:(id)arg0 ;
-(BOOL)isCurrentListDefinitionId:(int)arg0 ;
-(BOOL)isCurrentListStateOverridden;
-(BOOL)isFrame;
-(BOOL)isFrameEnd;
-(BOOL)isFrameStart;
-(BOOL)isHeaderOrFooter;
-(NSUInteger)blockIndex;
-(NSUInteger)runIndex;
-(float)leftMargin;
-(float)pageHeight;
-(float)pageOffset;
-(float)topMargin;
-(float)totalPageHeight;
-(id)currentListState;
-(id)init;
-(id)lastFooter;
-(id)lastHeader;
-(id)listStateForListDefinitionId:(int)arg0 ;
-(id)listStateForListDefinitionWithId:(int)arg0 settingUpStateIfNeededWithDocument:(id)arg1 ;
-(id)outlineState;
-(unsigned int)currentPage;
-(void)clearCurrentListState;
-(void)dealloc;
-(void)popParagraph;
-(void)pushParagraph:(id)arg0 ;
-(void)setBlockIndex:(NSUInteger)arg0 ;
-(void)setCurrentListState:(id)arg0 ;
-(void)setCurrentPage:(unsigned int)arg0 ;
-(void)setIsFrame:(BOOL)arg0 ;
-(void)setIsFrameEnd:(BOOL)arg0 ;
-(void)setIsFrameStart:(BOOL)arg0 ;
-(void)setIsHeaderOrFooter:(BOOL)arg0 ;
-(void)setLastFooter:(id)arg0 ;
-(void)setLastHeader:(id)arg0 ;
-(void)setLeftMargin:(float)arg0 ;
-(void)setListState:(id)arg0 forListDefinitionId:(int)arg1 ;
-(void)setPageHeight:(float)arg0 ;
-(void)setRunIndex:(NSUInteger)arg0 ;
-(void)setTopMargin:(float)arg0 ;
-(void)setTotalPageHeight:(float)arg0 ;


@end


#endif