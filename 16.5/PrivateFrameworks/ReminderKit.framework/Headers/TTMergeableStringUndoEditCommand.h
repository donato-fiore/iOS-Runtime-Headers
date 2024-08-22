// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TTMERGEABLESTRINGUNDOEDITCOMMAND_H
#define TTMERGEABLESTRINGUNDOEDITCOMMAND_H

@class NSString;
@protocol TTMergeableStringUndoCommand;

#import <Foundation/Foundation.h>


@interface TTMergeableStringUndoEditCommand : NSObject <TTMergeableStringUndoCommand>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) *void deleteRanges; // ivar: _deleteRanges
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) *void insertStrings; // ivar: _insertStrings
@property (readonly) Class superclass;


-(BOOL)addToGroup:(id)arg0 ;
-(BOOL)hasTopoIDsThatCanChange;
-(id)init;
-(void)applyToString:(id)arg0 ;
-(void)dealloc;
-(void)updateInsertTopoIDRange:(struct TopoIDRange )arg0 toNewRangeID:(struct TopoIDRange )arg1 ;
-(void)updateTopoIDRange:(struct TopoIDRange )arg0 toNewRangeID:(struct TopoIDRange )arg1 ;


@end


#endif