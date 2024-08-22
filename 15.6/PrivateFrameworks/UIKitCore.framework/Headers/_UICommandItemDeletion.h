// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UICOMMANDITEMDELETION_H
#define _UICOMMANDITEMDELETION_H

@class UICommandChange;


#import "_UICommandIdentifier.h"

@interface _UICommandItemDeletion : UICommandChange

@property (readonly, nonatomic) _UICommandIdentifier *anchor;


+(id)deletionWithAnchor:(id)arg0 ;
// -(BOOL)acceptBoolItemInsertionVisit:(id)arg0 itemDeletionVisit:(unk)arg1 menuInsertionVisit:(id)arg2 menuDeletionVisit:(unk)arg3  ;
-(id)initWithAnchor:(id)arg0 ;
// -(void)acceptItemInsertionVisit:(id)arg0 itemDeletionVisit:(unk)arg1 menuInsertionVisit:(id)arg2 menuDeletionVisit:(unk)arg3  ;


@end


#endif