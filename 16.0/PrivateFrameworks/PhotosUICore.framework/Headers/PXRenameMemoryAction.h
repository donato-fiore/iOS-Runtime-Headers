// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXRENAMEMEMORYACTION_H
#define PXRENAMEMEMORYACTION_H

@class PHMemory, NSString;


#import "PXPhotosAction.h"

@interface PXRenameMemoryAction : PXPhotosAction

@property (readonly, nonatomic) PHMemory *memory; // ivar: _memory
@property (readonly, copy, nonatomic) NSString *redoSubtitle; // ivar: _redoSubtitle
@property (readonly, copy, nonatomic) NSString *redoTitle; // ivar: _redoTitle
@property (readonly, copy, nonatomic) NSString *undoSubtitle; // ivar: _undoSubtitle
@property (readonly, copy, nonatomic) NSString *undoTitle; // ivar: _undoTitle


-(id)actionIdentifier;
-(id)actionNameLocalizationKey;
-(id)initWithMemory:(id)arg0 title:(id)arg1 subtitle:(id)arg2 ;
-(void)performAction:(id)arg0 ;
-(void)performUndo:(id)arg0 ;


@end


#endif