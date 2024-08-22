// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFMAILMENUCOMMAND_H
#define MFMAILMENUCOMMAND_H

@class UICommand;

#import <Foundation/Foundation.h>


@interface MFMailMenuCommand : NSObject

@property (readonly, nonatomic) UICommand *command; // ivar: _command
@property (readonly, nonatomic) NSInteger menu; // ivar: _menu


+(id)shortcutWithCommand:(id)arg0 menu:(NSInteger)arg1 ;
+(id)shortcutWithInput:(id)arg0 flags:(NSInteger)arg1 repeatable:(BOOL)arg2 menu:(NSInteger)arg3 action:(SEL)arg4 ;
+(id)shortcutWithInput:(id)arg0 flags:(NSInteger)arg1 repeatable:(BOOL)arg2 menu:(NSInteger)arg3 action:(SEL)arg4 title:(id)arg5 plist:(id)arg6 ;
-(id)initWithCommand:(id)arg0 menu:(NSInteger)arg1 ;


@end


#endif