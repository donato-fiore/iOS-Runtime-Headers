// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICSHAREDRECENTLYDELETEDSHAREDNOTEUTILITIES_H
#define ICSHAREDRECENTLYDELETEDSHAREDNOTEUTILITIES_H


#import <Foundation/Foundation.h>


@interface ICSharedRecentlyDeletedSharedNoteUtilities : NSObject



+(NSUInteger)sharedNoteTypeForNotes:(id)arg0 ;
+(id)messageForSharedNotesType:(NSUInteger)arg0 ;
+(id)notesSharedViaICloudFromNotes:(id)arg0 ;
+(id)titleForSharedNotesType:(NSUInteger)arg0 ;
+(void)showAlertsIfNecessaryForDeletingSharedNotes:(id)arg0 noteDeleteType:(NSUInteger)arg1 displayWindow:(id)arg2 completionHandler:(id)arg3 ;
+(void)showDeletingSharedNotesAlertWithType:(NSUInteger)arg0 displayWindow:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif