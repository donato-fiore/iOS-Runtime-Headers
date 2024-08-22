// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTGROUPNODEFORMATMANAGER_H
#define TSTGROUPNODEFORMATMANAGER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "TSCECellValue.h"

@interface TSTGroupNodeFormatManager : NSObject {
    NSMutableDictionary *_rowLookupKeysForFormat;
    BOOL _noFormatMergingNeeded;
    NSMutableDictionary *_upgradeRowUidsForFormat;
}


@property (readonly, nonatomic) TSCECellValue *cellValue; // ivar: _cellValue


-(BOOL)mergedFormatChangedByAddingRowUID:(struct TSKUIDStruct *)arg0 andCellValue:(id)arg1 groupBy:(id)arg2 ;
-(BOOL)mergedFormatChangedByRemovingRowUID:(struct TSKUIDStruct *)arg0 groupBy:(id)arg1 ;
-(id)description;
-(id)initWithArchive:(*void)arg0 ;
-(id)initWithCellValue:(id)arg0 ;
-(void)encodeToArchive:(*void)arg0 forGroupBy:(id)arg1 backwardCompat:(BOOL)arg2 ;
-(void)p_recalculateMergedFormatWithGroupBy:(id)arg0 ;
-(void)reset;
-(void)unpackAfterUnarchiveForGroupBy:(id)arg0 ;
-(void)updateWithDocumentRoot:(id)arg0 ;


@end


#endif