// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PBPRESENTATIONREADERSTATE_H
#define PBPRESENTATIONREADERSTATE_H

@class NSMutableArray, NSMutableDictionary;
@protocol TCCancelDelegate;

#import <Foundation/Foundation.h>

#import "PDPresentation.h"
#import "ESDRoot.h"
#import "OITSUNoCopyDictionary.h"
#import "PBOfficeArtReaderState.h"
#import "PDSlideBase.h"
#import "PBOutlineBulletDictionary.h"
#import "ESDObject.h"
#import "PBSlideState.h"
#import "ESDContainer.h"

@interface PBPresentationReaderState : NSObject {
    *void mPptBinaryReader;
    PDPresentation *mTgtPresentation;
    ESDRoot *mDocumentRoot;
    *void mCurrentSlideTextBlockRecordIndexRangeVector;
    unsigned int mSrcSlideId;
    NSMutableArray *mSlideIndexes;
    OITSUNoCopyDictionary *mSlideMasterToMasterStyles;
    *__CFDictionary mHyperlinkMap;
    PBOfficeArtReaderState *mOfficeArtState;
    NSMutableArray *mFontEntities;
    PDSlideBase *mTgtSlide;
    BOOL mHasCharacterPropertyBulletIndex;
    unsigned int mBulletIndex;
    PBOutlineBulletDictionary *mPlaceholderBulletStyles;
    PBOutlineBulletDictionary *mPlaceholderMacCharStyles;
    ESDObject *mCurrentBulletStyle;
    ESDObject *mCurrentMacCharStyle;
    *void mSrcDocMasterStyleInfoVector;
    *void mSrcCurrentMasterStyleInfoVector;
    PBSlideState *mSlideState;
    NSMutableDictionary *mTargetShapeToSourceTextBoxContainerHolderMap;
}


@property (retain, nonatomic) NSObject<TCCancelDelegate> *cancelDelegate; // ivar: mCancel
@property BOOL hasSlideNumberPlaceholder; // ivar: mHasSlideNumberPlaceholder
@property (retain) ESDContainer *sourceSlideListHolder; // ivar: mSrcSlideListHolder


-(*void)currentSlideTextBlockRecordIndexRangeVector;
-(*void)reader;
-(BOOL)hasCharacterPropertyBulletIndex;
-(BOOL)hasCurrentSourceMasterStyleInfoVector;
-(BOOL)isCancelled;
-(NSUInteger)fontEntityCount;
-(NSUInteger)getSlideIndexAt:(NSUInteger)arg0 ;
-(NSUInteger)numberOfSlideIndexes;
-(id)currentBulletStyle;
-(id)currentMacCharStyle;
-(id)documentRoot;
-(id)fontEntityAtIndex:(NSUInteger)arg0 ;
-(id)hyperlinkInfoWithId:(unsigned int)arg0 createIfAbsent:(BOOL)arg1 ;
-(id)initWithReader:(*void)arg0 tgtPresentation:(id)arg1 ;
-(id)masterStyles:(id)arg0 ;
-(id)officeArtState;
-(id)slideIndexesRef;
-(id)slideState;
-(id)sourceTextBoxContainerHolderForTargetShape:(id)arg0 ;
-(id)tgtPresentation;
-(id)tgtSlide;
-(struct PBReaderMasterStyleInfo *)currentSourceMasterStyleInfoOfType:(int)arg0 ;
-(struct PBReaderMasterStyleInfo *)docSourceMasterStyleInfoOfType:(int)arg0 ;
-(unsigned int)bulletIndex;
-(void)addFontEntity:(id)arg0 charSet:(int)arg1 type:(int)arg2 family:(int)arg3 ;
-(void)addSlideIndex:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)resetSlideState;
-(void)setBulletIndex:(unsigned int)arg0 ;
-(void)setCurrentBulletStyle:(id)arg0 macCharStyle:(id)arg1 ;
-(void)setCurrentSourceMasterStyleInfoVector:(*void)arg0 ;
-(void)setCurrentTextType:(int)arg0 placeholderIndex:(unsigned int)arg1 ;
-(void)setDocumentRoot:(id)arg0 ;
-(void)setHasCharacterPropertyBulletIndex:(BOOL)arg0 ;
-(void)setMasterStyles:(id)arg0 slideMaster:(id)arg1 ;
-(void)setPlaceholderBulletStyles:(id)arg0 ;
-(void)setPlaceholderMacCharStyles:(id)arg0 ;
-(void)setSourceSlideId:(unsigned int)arg0 ;
-(void)setSourceTextBoxContainerHolder:(id)arg0 forTargetShape:(id)arg1 ;
-(void)setTgtSlide:(id)arg0 ;


@end


#endif