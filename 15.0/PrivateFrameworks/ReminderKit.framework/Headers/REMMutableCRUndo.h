// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REMMUTABLECRUNDO_H
#define REMMUTABLECRUNDO_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface REMMutableCRUndo : NSObject

@property (readonly, nonatomic) NSMutableArray *undoBlocks; // ivar: _undoBlocks


-(id)immutableCopy;
-(id)init;
-(void)addUndoBlock:(id)arg0 ;


@end


#endif