// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCHSELECTION_H
#define TSCHSELECTION_H

@class TSKSelection, NSSet, NSArray;


#import "TSCHChartDrawableInfo.h"
#import "TSCHSelectionPath.h"
#import "TSCHSelectionPathType.h"

@interface TSCHSelection : TSKSelection

@property (readonly, retain, nonatomic) TSCHChartDrawableInfo *chartInfo; // ivar: _info
@property (readonly, copy, nonatomic) TSCHSelectionPath *firstPath;
@property (readonly, nonatomic) NSUInteger pathCount;
@property (readonly, copy, nonatomic) TSCHSelectionPathType *pathType;
@property (readonly, copy, nonatomic) NSSet *pathTypes;
@property (readonly, copy, nonatomic) NSArray *paths; // ivar: _paths
@property (readonly, nonatomic) BOOL returnChartFrameForAutoscroll;


+(Class)archivedSelectionClass;
+(id)emptySelectionWithChartInfo:(id)arg0 ;
+(id)selectionWithChartInfo:(id)arg0 paths:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(id)initWithChartInfo:(id)arg0 path:(id)arg1 ;
-(id)initWithChartInfo:(id)arg0 paths:(id)arg1 ;
-(id)initWithPaths:(id)arg0 ;
-(id)selectionByAddingPathsFromArray:(id)arg0 ;
-(id)selectionByRemovingPathsFromArray:(id)arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;


@end


#endif