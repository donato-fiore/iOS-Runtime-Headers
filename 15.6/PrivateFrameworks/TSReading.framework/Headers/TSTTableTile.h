// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTTABLETILE_H
#define TSTTABLETILE_H

@class NSMutableArray, NSArray;


#import "TSPObject.h"

@interface TSTTableTile : TSPObject {
    unsigned char mMaxColumn;
    unsigned short mMaxRow;
    unsigned short mNumCells;
    NSMutableArray *mRowInfos;
    unsigned short mNumRows;
    unsigned char mStorageVersion;
}


@property (readonly, nonatomic) unsigned char maxColumn;
@property (readonly, nonatomic) unsigned short maxRow;
@property (readonly, nonatomic) unsigned short numCells;
@property (readonly, nonatomic) unsigned short numRows;
@property (readonly, nonatomic) NSArray *rowInfos;


-(NSUInteger)flushableSize;
-(id)description;
-(id)initWithContext:(id)arg0 ;
-(id)initWithRows:(id)arg0 context:(id)arg1 ;
-(id)packageLocator;
-(void)dealloc;
-(void)debugDump;
-(void)debugListRows;
-(void)i_upgradeTileRowInfosWithDataStore:(id)arg0 ;
-(void)validate;


@end


#endif