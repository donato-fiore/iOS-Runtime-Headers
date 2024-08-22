// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUMOSAICCELLSIZE_H
#define HUMOSAICCELLSIZE_H


#import <Foundation/Foundation.h>


@interface HUMosaicCellSize : NSObject

@property (nonatomic) NSUInteger numCols; // ivar: _numCols
@property (nonatomic) NSUInteger numRows; // ivar: _numRows
@property (nonatomic) NSUInteger sizeDescription; // ivar: _sizeDescription


+(id)createMosaicCellSizeForSizeDescription:(NSUInteger)arg0 ;


@end


#endif