// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICTABLECELLEDITINGUNDOGROUP_H
#define ICTABLECELLEDITINGUNDOGROUP_H

@class TTMergeableStringUndoGroup, NSUUID, ICTableUndoTarget;


#import "ICTableAttachmentSelection.h"

@interface ICTableCellEditingUndoGroup : TTMergeableStringUndoGroup

@property (readonly, nonatomic) NSUUID *columnID; // ivar: _columnID
@property (readonly, nonatomic) NSUUID *rowID; // ivar: _rowID
@property (readonly, nonatomic) ICTableAttachmentSelection *tableSelection; // ivar: _tableSelection
@property (readonly, nonatomic) ICTableUndoTarget *undoTarget; // ivar: _undoTarget


-(id)init;
-(id)initWithColumn:(id)arg0 row:(id)arg1 selection:(id)arg2 undoTarget:(id)arg3 ;


@end


#endif