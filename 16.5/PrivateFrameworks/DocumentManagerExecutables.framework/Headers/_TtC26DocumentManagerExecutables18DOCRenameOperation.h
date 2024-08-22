// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC26DOCUMENTMANAGEREXECUTABLES18DOCRENAMEOPERATION_H
#define _TTC26DOCUMENTMANAGEREXECUTABLES18DOCRENAMEOPERATION_H

@class FPRenameOperation, NSString;
@protocol DOCUndoableOperation;



@interface _TtC26DocumentManagerExecutables18DOCRenameOperation : FPRenameOperation <DOCUndoableOperation>

 {
    ? item;
    ? newDisplayName;
    ? newFileName;
    ? oldDisplayName;
    ? oldFileName;
    ? undoManager;
}


@property (nonatomic, readonly) NSString *actionNameForUndoing;


-(id)initWithItem:(id)arg0 newDisplayName:(id)arg1 ;
-(id)initWithItem:(id)arg0 newFileName:(id)arg1 ;
-(id)initWithItem:(id)arg0 newName:(id)arg1 ;
-(id)operationForRedoing;
-(id)operationForUndoing;
-(void)registerUndo;


@end


#endif