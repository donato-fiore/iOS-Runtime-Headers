// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICTABLECELLMERGEABLESTRINGDELEGATE_H
#define ICTABLECELLMERGEABLESTRINGDELEGATE_H

@class NSUUID, NSString, NSMutableArray;
@protocol TTMergeableStringDelegate, ICTableCellMergeableStringObserving;

#import <Foundation/Foundation.h>


@interface ICTableCellMergeableStringDelegate : NSObject <TTMergeableStringDelegate>



@property (readonly, weak, nonatomic) NSObject<ICTableCellMergeableStringObserving> *changeObserver; // ivar: _changeObserver
@property (readonly, nonatomic) NSUUID *columnID; // ivar: _columnID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger editingCount; // ivar: _editingCount
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUUID *rowID; // ivar: _rowID
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableArray *undoCommands; // ivar: _undoCommands


-(BOOL)wantsUndoCommands;
-(id)init;
-(id)initWithTableCellChangeObserver:(id)arg0 columnID:(id)arg1 rowID:(id)arg2 ;
-(void)addUndoCommand:(id)arg0 ;
-(void)beginEditing;
-(void)edited:(NSUInteger)arg0 range:(struct _NSRange )arg1 changeInLength:(NSInteger)arg2 ;
-(void)endEditing;


@end


#endif