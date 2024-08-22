// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MFTABLEVIEWMODELDIFF_H
#define _MFTABLEVIEWMODELDIFF_H

@class NSIndexSet;

#import <Foundation/Foundation.h>


@interface _MFTableViewModelDiff : NSObject

@property (retain, nonatomic) NSIndexSet *changedRows; // ivar: _changedRows
@property (retain, nonatomic) NSIndexSet *deletedRows; // ivar: _deletedRows
@property (retain, nonatomic) NSIndexSet *insertedRows; // ivar: _insertedRows




@end


#endif