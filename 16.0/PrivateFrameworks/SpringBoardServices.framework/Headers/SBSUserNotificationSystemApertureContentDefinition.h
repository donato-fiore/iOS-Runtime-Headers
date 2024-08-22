// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSUSERNOTIFICATIONSYSTEMAPERTURECONTENTDEFINITION_H
#define SBSUSERNOTIFICATIONSYSTEMAPERTURECONTENTDEFINITION_H

@class NSString, NSNumber;

#import <Foundation/Foundation.h>

#import "SBSUserNotificationColorDefinition.h"
#import "SBSUserNotificationAssetDefinition.h"
#import "SBSUserNotificationImageDefinition.h"

@interface SBSUserNotificationSystemApertureContentDefinition : NSObject

@property (copy, nonatomic) NSString *alertHeader; // ivar: _alertHeader
@property (copy, nonatomic) SBSUserNotificationColorDefinition *alertHeaderColor; // ivar: _alertHeaderColor
@property (copy, nonatomic) NSString *alertHeaderColorName;
@property (copy, nonatomic) NSString *alertMessage; // ivar: _alertMessage
@property (copy, nonatomic) NSNumber *alertTextAlignment; // ivar: _alertTextAlignment
@property (copy, nonatomic) NSString *alternateButtonTitle; // ivar: _alternateButtonTitle
@property (copy, nonatomic) NSString *defaultButtonTitle; // ivar: _defaultButtonTitle
@property (copy, nonatomic) SBSUserNotificationColorDefinition *keyColor; // ivar: _keyColor
@property (copy, nonatomic) NSString *keyColorName;
@property (copy, nonatomic) SBSUserNotificationAssetDefinition *leadingAssetDefinition; // ivar: _leadingAssetDefinition
@property (copy, nonatomic) SBSUserNotificationImageDefinition *leadingImageDefinition;
@property (nonatomic) BOOL preventsAutomaticDismissal; // ivar: _preventsAutomaticDismissal


-(id)_initWithDictionary:(id)arg0 ;
-(id)build;


@end


#endif