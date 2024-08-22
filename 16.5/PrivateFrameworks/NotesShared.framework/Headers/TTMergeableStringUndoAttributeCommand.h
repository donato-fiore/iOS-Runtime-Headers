// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TTMERGEABLESTRINGUNDOATTRIBUTECOMMAND_H
#define TTMERGEABLESTRINGUNDOATTRIBUTECOMMAND_H

@class NSString;
@protocol TTMergeableStringUndoCommand;

#import <Foundation/Foundation.h>


@interface TTMergeableStringUndoAttributeCommand : NSObject <TTMergeableStringUndoCommand>



@property (readonly, nonatomic) *void attributeRanges; // ivar: _attributeRanges
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)addToGroup:(id)arg0 ;
-(BOOL)hasTopoIDsThatCanChange;
-(id)init;
-(void)applyToString:(id)arg0 ;
-(void)dealloc;
-(void)updateTopoIDRange:(struct TopoIDRange )arg0 toNewRangeID:(struct TopoIDRange )arg1 ;


@end


#endif