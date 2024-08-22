// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSUSERNOTIFICATIONSYSTEMIMAGEDEFINITION_H
#define SBSUSERNOTIFICATIONSYSTEMIMAGEDEFINITION_H

@class NSString;


#import "SBSUserNotificationImageDefinition.h"
#import "SBSUserNotificationColorDefinition.h"

@interface SBSUserNotificationSystemImageDefinition : SBSUserNotificationImageDefinition

@property (readonly, copy, nonatomic) NSString *systemImageName; // ivar: _systemImageName
@property (readonly, copy, nonatomic) SBSUserNotificationColorDefinition *tintColor; // ivar: _tintColor


+(id)_definitionType;
-(id)_initWithDictionary:(id)arg0 ;
-(id)_initWithSystemImageName:(id)arg0 tintColor:(id)arg1 ;
-(id)build;
-(id)initWithSystemImageName:(id)arg0 ;
-(id)initWithSystemImageName:(id)arg0 tintColor:(id)arg1 ;


@end


#endif