// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EDWORKBOOK_H
#define EDWORKBOOK_H

@class NSMutableArray, NSDate, NSString;


#import "OCDDocument.h"
#import "EDResources.h"
#import "EDProcessors.h"
#import "ECMappingContext.h"
#import "EDWarnings.h"
#import "EDReference.h"
#import "ESDContainer.h"

@interface EDWorkbook : OCDDocument {
    EDResources *mResources;
    NSMutableArray *mOtherResources;
    EDProcessors *mProcessors;
    ECMappingContext *mMappingContext;
    EDWarnings *mWarnings;
    NSMutableArray *mSheets;
    EDReference *mVisibleRange;
    NSUInteger mActiveSheetIndex;
    NSDate *mDateBaseDate;
    int mDateBase;
    NSString *mFileName;
    NSString *mTemporaryDirectory;
    NSMutableArray *mBulletBlips;
    ESDContainer *mEscherDrawingGroup;
    BOOL mIsOutOfMemoryConditionDetected;
}




+(id)impliedColorMap;
-(BOOL)isOutOfMemoryDetected;
-(NSUInteger)activeSheetIndex;
-(NSUInteger)indexOfSheet:(id)arg0 ;
-(NSUInteger)indexOfSheetWithName:(id)arg0 ;
-(NSUInteger)sheetCount;
-(id)activeSheet;
-(id)bulletBlips;
-(id)dateBaseDate;
-(id)description;
-(id)escherDrawingGroup;
-(id)fileName;
-(id)init;
-(id)initWithFileName:(id)arg0 andStringOptimization:(BOOL)arg1 ;
-(id)initWithStringOptimization:(BOOL)arg0 ;
-(id)mappingContext;
-(id)processors;
-(id)resources;
-(id)sheetAtIndex:(NSUInteger)arg0 ;
-(id)sheetAtIndex:(NSUInteger)arg0 loadIfNeeded:(BOOL)arg1 ;
-(id)temporaryDirectory;
-(id)visibleRange;
-(id)warnings;
-(id)workbookName;
-(int)dateBase;
-(unsigned int)legacyDateBase;
-(void)addOtherResources:(id)arg0 ;
-(void)addSheet:(id)arg0 ;
-(void)applyProcessors;
-(void)dealloc;
-(void)outOfMemoryDetected;
-(void)reduceMemoryIfPossible;
-(void)removeSheetAtIndex:(NSUInteger)arg0 ;
-(void)removeWorksheetAtIndex:(unsigned int)arg0 ;
-(void)setActiveSheet:(id)arg0 ;
-(void)setActiveSheetIndex:(NSUInteger)arg0 ;
-(void)setDateBase:(int)arg0 ;
-(void)setEscherDrawingGroup:(id)arg0 ;
-(void)setMappingContext:(id)arg0 ;
-(void)setResources:(id)arg0 ;
-(void)setTemporaryDirectory:(id)arg0 ;
-(void)setVisibleRange:(id)arg0 ;


@end


#endif