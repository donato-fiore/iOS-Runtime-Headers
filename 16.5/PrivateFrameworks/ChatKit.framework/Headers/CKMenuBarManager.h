// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKMENUBARMANAGER_H
#define CKMENUBARMANAGER_H

@class UIKeyCommand, NSArray;

#import <Foundation/Foundation.h>


@interface CKMenuBarManager : NSObject

@property (retain, nonatomic) UIKeyCommand *allMessagesCommand; // ivar: _allMessagesCommand
@property (retain, nonatomic) NSArray *filterCommands; // ivar: _filterCommands
@property (retain, nonatomic) UIKeyCommand *knownSenderCommand; // ivar: _knownSenderCommand
@property (retain, nonatomic) UIKeyCommand *oscarCommand; // ivar: _oscarCommand
@property (retain, nonatomic) UIKeyCommand *recentlyDeletedCommand; // ivar: _recentlyDeletedCommand
@property (retain, nonatomic) UIKeyCommand *unknownSenderCommand; // ivar: _unknownSenderCommand
@property (retain, nonatomic) UIKeyCommand *unreadFilterCommand; // ivar: _unreadFilterCommand


+(id)sharedInstance;
-(id)allKeyboardShortcutKeyCommands;


@end


#endif