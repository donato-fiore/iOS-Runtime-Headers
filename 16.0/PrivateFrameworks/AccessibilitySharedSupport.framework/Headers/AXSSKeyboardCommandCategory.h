// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXSSKEYBOARDCOMMANDCATEGORY_H
#define AXSSKEYBOARDCOMMANDCATEGORY_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface AXSSKeyboardCommandCategory : NSObject

@property (readonly, nonatomic) NSArray *commands; // ivar: _commands
@property (readonly, nonatomic) NSString *localizedName; // ivar: _localizedName


+(id)_advancedCommandsFromAvailableCommands:(id)arg0 ;
+(id)_basicCommandsFromAvailableCommands:(id)arg0 ;
+(id)_categoryWithCommandIdentifiers:(id)arg0 availableCommands:(id)arg1 localizedName:(id)arg2 ;
+(id)_categoryWithCommands:(id)arg0 availableCommands:(id)arg1 localizedName:(id)arg2 ;
+(id)_deviceCommandsFromAvailableCommands:(id)arg0 ;
+(id)_gesturesCommandsFromAvailableCommands:(id)arg0 ;
+(id)_interactionCommandsFromAvailableCommands:(id)arg0 ;
+(id)_movementCommandsFromAvailableCommands:(id)arg0 ;
+(id)_pointerCommandsFromAvailableCommands:(id)arg0 ;
+(id)allCategoriesForAvailableCommands:(id)arg0 ;
-(id)initWithCommands:(id)arg0 localizedName:(id)arg1 ;


@end


#endif