// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TTMERGEABLESTRINGUNDOGROUP_H
#define TTMERGEABLESTRINGUNDOGROUP_H

@class NSMutableArray, NSString, NSMutableDictionary;
@protocol TTMergeableStringUndoCommand;

#import <Foundation/Foundation.h>


@interface TTMergeableStringUndoGroup : NSObject <TTMergeableStringUndoCommand>



@property (retain, nonatomic) NSMutableArray *commands; // ivar: _commands
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *seen; // ivar: _seen
@property (readonly) Class superclass;


-(BOOL)addSeenRange:(struct TopoIDRange )arg0 ;
-(BOOL)addToGroup:(id)arg0 ;
-(BOOL)hasTopoIDsThatCanChange;
-(id)init;
-(void)addCommand:(id)arg0 ;
-(void)applyToString:(id)arg0 ;
-(void)closeGroup;
-(void)updateTopoIDRange:(struct TopoIDRange )arg0 toNewRangeID:(struct TopoIDRange )arg1 ;


@end


#endif