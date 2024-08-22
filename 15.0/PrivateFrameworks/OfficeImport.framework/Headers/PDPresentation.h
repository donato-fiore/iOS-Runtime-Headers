// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PDPRESENTATION_H
#define PDPRESENTATION_H

@class NSMutableArray;


#import "OCDDocument.h"

@interface PDPresentation : OCDDocument {
    NSMutableArray *mSlideMasters;
    NSMutableArray *mNotesMasters;
    NSMutableArray *mSlides;
    NSMutableArray *mBulletBlips;
    CGSize mSlideSize;
    CGSize mNotesSize;
    BOOL mIsAutoPlay;
    BOOL mIsCommentsVisible;
    BOOL mIsLooping;
    BOOL mIsKiosk;
    NSMutableArray *mCommentAuthors;
}




-(BOOL)isAutoPlay;
-(BOOL)isCommentsVisible;
-(BOOL)isKiosk;
-(BOOL)isLooping;
-(NSUInteger)commentAuthorCount;
-(NSUInteger)indexOfSlide:(id)arg0 ;
-(NSUInteger)notesMasterCount;
-(NSUInteger)slideCount;
-(NSUInteger)slideMasterCount;
-(id)bulletBlipAtIndex:(int)arg0 ;
-(id)bulletBlips;
-(id)commentAuthorAtIndex:(NSUInteger)arg0 ;
-(id)description;
-(id)init;
-(id)notesMasterAtIndex:(NSUInteger)arg0 ;
-(id)slideAtIndex:(NSUInteger)arg0 ;
-(id)slideMasterAtIndex:(NSUInteger)arg0 ;
-(struct CGSize )notesSize;
-(struct CGSize )slideSize;
-(unsigned int)addBulletBlip:(id)arg0 ;
-(unsigned int)bulletBlipCount;
-(void)addCommentAuthor:(id)arg0 ;
-(void)addNotesMaster:(id)arg0 ;
-(void)addSlide:(id)arg0 ;
-(void)addSlideMaster:(id)arg0 ;
-(void)cacheGraphicStyleForDrawable:(id)arg0 colorContext:(id)arg1 ;
-(void)cacheGraphicStylesForSlideBase:(id)arg0 ;
-(void)ensureDefaultLayoutsForMasters;
-(void)flushUnusedMastersAndLayouts;
-(void)removeUnnecessaryOverrides;
-(void)setIsAutoPlay:(BOOL)arg0 ;
-(void)setIsCommentsVisible:(BOOL)arg0 ;
-(void)setIsKiosk:(BOOL)arg0 ;
-(void)setIsLooping:(BOOL)arg0 ;
-(void)setNotesSize:(struct CGSize )arg0 ;
-(void)setSlideSize:(struct CGSize )arg0 ;
-(void)setUpPropertyHierarchyPreservingEffectiveValues;


@end


#endif