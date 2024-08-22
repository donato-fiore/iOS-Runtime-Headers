// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCROBRAILLEDISPLAYSTATUS_H
#define SCROBRAILLEDISPLAYSTATUS_H

@class NSData;

#import <Foundation/Foundation.h>


@interface SCROBrailleDisplayStatus : NSObject

@property (retain, nonatomic) NSData *aggregatedData; // ivar: _aggregatedData
@property (nonatomic) NSInteger masterStatusCellIndex; // ivar: _masterStatusCellIndex
@property (retain, nonatomic) NSData *realData; // ivar: _realData
@property (nonatomic) int virtualAlignment; // ivar: _virtualAlignment
@property (retain, nonatomic) NSData *virtualData; // ivar: _virtualData




@end


#endif