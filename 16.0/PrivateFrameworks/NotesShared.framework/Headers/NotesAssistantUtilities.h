// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NOTESASSISTANTUTILITIES_H
#define NOTESASSISTANTUTILITIES_H


#import <Foundation/Foundation.h>


@interface NotesAssistantUtilities : NSObject



+(id)folderForGroupName:(id)arg0 withNoteContext:(id)arg1 htmlNoteContext:(id)arg2 ;
+(id)folderOptionsForModernContext:(id)arg0 htmlContext:(id)arg1 ;
+(id)legacyFolderForGroupName:(id)arg0 withContext:(id)arg1 ;
+(id)modernFolderForGroupName:(id)arg0 withContext:(id)arg1 ;
+(id)objectForIDURL:(id)arg0 inContext:(id)arg1 ;


@end


#endif