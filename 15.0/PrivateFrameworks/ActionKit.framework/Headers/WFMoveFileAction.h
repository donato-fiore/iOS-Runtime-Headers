// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFMOVEFILEACTION_H
#define WFMOVEFILEACTION_H

@class WFAction;
@protocol WFFileStorageServiceOperation;



@interface WFMoveFileAction : WFAction

@property (retain, nonatomic) NSObject<WFFileStorageServiceOperation> *saveOperation; // ivar: _saveOperation


-(void)runAsynchronouslyWithInput:(id)arg0 ;


@end


#endif