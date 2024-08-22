// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTTABLEINFOHINT_H
#define TSTTABLEINFOHINT_H

@class NSMutableIndexSet;

#import <Foundation/Foundation.h>

#import "TSTCellUIDList.h"

@interface TSTTableInfoHint : NSObject {
    vector<unsigned long, std::allocator<unsigned long>> _cellFlags;
}


@property ? cellFlags;
@property (readonly, nonatomic) TSTCellUIDList *cellUIDs; // ivar: _cellUIDs
@property (readonly, nonatomic) CGSize maximumSize; // ivar: _maximumSize
@property (readonly, nonatomic) NSMutableIndexSet *tableStyleIndexes; // ivar: _tableStyleIndexes


-(BOOL)containsStyleNetworkIndex:(NSUInteger)arg0 ;
-(void)addCellUID:(struct TSKUIDStructCoord *)arg0 flags:(NSUInteger)arg1 addingMaximumSize:(struct CGSize )arg2 ;
-(void)addTableStyleIndex:(NSUInteger)arg0 ;
-(void)enumerateCellUIDsUsingBlock:(id)arg0 ;
-(void)enumerateTableStylesUsingBlock:(id)arg0 ;


@end


#endif