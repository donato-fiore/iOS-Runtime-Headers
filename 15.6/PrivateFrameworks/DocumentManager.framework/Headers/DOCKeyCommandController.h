// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DOCKEYCOMMANDCONTROLLER_H
#define DOCKEYCOMMANDCONTROLLER_H


#import <Foundation/Foundation.h>


@interface DOCKeyCommandController : NSObject



+(id)cancellingKeyCommandsWithAction:(SEL)arg0 ;
+(id)dismissingKeyCommandsWithAction:(SEL)arg0 ;
-(id)_menuDefinition;
-(id)_menuOrder;
-(id)_menuTitleForCustomMenuWithIdentifier:(id)arg0 ;
-(id)_unwantedMenuIdentifiers;
-(id)allKeyCommands;
-(id)allKeyCommandsWithAction:(SEL)arg0 ;
-(void)buildWithBuilder:(id)arg0 ;


@end


#endif