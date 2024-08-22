// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SETCHANGETOINDEXPATHCONVERTER_H
#define SETCHANGETOINDEXPATHCONVERTER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface SetChangeToIndexPathConverter : NSObject {
    NSMutableArray *_indexPathsToDelete;
    NSMutableArray *_indexPathsToInsert;
    NSMutableArray *_indexPathsToReload;
    NSMutableArray *_indexPathsToMove;
    NSMutableArray *_deleteInsertPairsToTreatAsMoves;
}




-(id)init;


@end


#endif