// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REMCRUNDO_H
#define REMCRUNDO_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface REMCRUndo : NSObject

@property (readonly, nonatomic) NSArray *undoBlocks; // ivar: _undoBlocks


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithUndoBlocks:(id)arg0 ;


@end


#endif