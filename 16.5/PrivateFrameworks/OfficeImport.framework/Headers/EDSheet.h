// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDSHEET_H
#define EDSHEET_H

@class NSMutableArray;


#import "OCDDelayedNode.h"
#import "EDString.h"
#import "EDColorReference.h"
#import "EDHeaderFooter.h"
#import "EDPageSetup.h"
#import "OITSUPointerKeyDictionary.h"
#import "EDProcessors.h"
#import "EDWarnings.h"
#import "ESDContainer.h"
#import "EDWorkbook.h"

@interface EDSheet : OCDDelayedNode {
    EDString *mName;
    BOOL mHidden;
    BOOL mDisplayFormulas;
    BOOL mDisplayGridlines;
    EDColorReference *mDefaultGridlineColorReference;
    EDHeaderFooter *mHeaderFooter;
    EDPageSetup *mPageSetup;
    NSMutableArray *mDrawables;
    OITSUPointerKeyDictionary *mTextBoxMap;
    OITSUPointerKeyDictionary *mCommentMap;
    EDProcessors *mProcessors;
    EDWarnings *mWarnings;
    ESDContainer *mEscherDrawing;
}


@property (nonatomic) BOOL isDialogSheet; // ivar: mIsDialogSheet
@property (readonly, weak) EDWorkbook *workbook; // ivar: mWorkbook


+(id)sheetWithWorkbook:(id)arg0 ;
-(BOOL)isDisplayFormulas;
-(BOOL)isDisplayGridlines;
-(BOOL)isHidden;
-(NSUInteger)commentCount;
-(NSUInteger)drawableCount;
-(id)defaultGridlineColor;
-(id)defaultGridlineColorReference;
-(id)description;
-(id)drawableAtIndex:(NSUInteger)arg0 ;
-(id)drawableEnumerator;
-(id)drawables;
-(id)edCommentForShape:(id)arg0 ;
-(id)edTextBoxForShape:(id)arg0 ;
-(id)escherDrawing;
-(id)headerFooter;
-(id)initWithWorkbook:(id)arg0 ;
-(id)name;
-(id)pageSetup;
-(id)processors;
-(id)warnings;
-(void)addDrawable:(id)arg0 ;
-(void)applyProcessors;
-(void)dealloc;
-(void)doneWithNonRowContent;
-(void)reduceMemoryIfPossible;
-(void)removeDrawableAtIndex:(NSUInteger)arg0 ;
-(void)setDefaultGridlineColor:(id)arg0 ;
-(void)setDefaultGridlineColorReference:(id)arg0 ;
-(void)setDisplayFormulas:(BOOL)arg0 ;
-(void)setDisplayGridlines:(BOOL)arg0 ;
-(void)setEDComment:(id)arg0 forShape:(id)arg1 ;
-(void)setEDTextBox:(id)arg0 forShape:(id)arg1 ;
-(void)setEscherDrawing:(id)arg0 ;
-(void)setHeaderFooter:(id)arg0 ;
-(void)setHidden:(BOOL)arg0 ;
-(void)setName:(id)arg0 ;
-(void)setPageSetup:(id)arg0 ;
-(void)setup;
-(void)teardown;


@end


#endif