// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCHSELECTIONPATH_H
#define TSCHSELECTIONPATH_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "TSCHSelectionPathType.h"
#import "TSCHSelectionPath.h"

@interface TSCHSelectionPath : NSObject <NSCopying>

 {
    NSArray *_arguments;
}


@property (readonly, nonatomic) TSCHSelectionPathType *pathType; // ivar: _pathType
@property (readonly, nonatomic) TSCHSelectionPath *subSelection; // ivar: _subSelection


+(id)selectionPathWithPathType:(id)arg0 arguments:(id)arg1 ;
+(id)selectionPathWithPathType:(id)arg0 arguments:(id)arg1 subSelection:(id)arg2 ;
+(id)selectionPathWithType:(id)arg0 name:(id)arg1 arguments:(id)arg2 ;
+(id)seriesEditModeSelectionPath;
+(id)seriesSelectionPathWithSeriesIndex:(NSUInteger)arg0 ;
+(id)seriesSymbolsSelectionPathWithSeriesIndex:(NSUInteger)arg0 ;
+(id)seriesValueLabelSelectionPathWithSeriesIndex:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)argumentsCount;
-(NSUInteger)hash;
-(id)argumentAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debuggingName;
-(id)description;
-(id)initWithArchive:(*void)arg0 ;
-(id)initWithPathType:(id)arg0 arguments:(id)arg1 subSelection:(id)arg2 ;
-(id)initWithType:(id)arg0 name:(id)arg1 arguments:(id)arg2 ;
-(id)name;
-(id)rangeOfPathsToPath:(id)arg0 ;
-(id)rangeOfReferenceLinePathsToPath:(id)arg0 forModel:(id)arg1 ;
-(id)type;
-(void)saveToArchive:(*void)arg0 ;


@end


#endif