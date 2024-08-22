// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CACCUSTOMCOMMANDEDITORPRESENTATIONMANAGER_H
#define CACCUSTOMCOMMANDEDITORPRESENTATIONMANAGER_H



#import "CACOutOfProcessPresentationManager.h"

@interface CACCustomCommandEditorPresentationManager : CACOutOfProcessPresentationManager



+(NSInteger)remoteViewType;
+(int)axNotification;
-(BOOL)showCustomCommandEditorWithGesture:(id)arg0 ;
-(BOOL)showCustomCommandEditorWithRecordedUserActionFlow:(id)arg0 ;
-(BOOL)showCustomCommandEditorWithShortcutsWorkflow:(id)arg0 ;
-(BOOL)showCustomCommandEditorWithTextToInsert:(id)arg0 ;
-(void)_showCustomCommandEditorWithContextKey:(id)arg0 contextValue:(id)arg1 ;
-(void)handleAXNotificationData:(*void)arg0 ;


@end


#endif