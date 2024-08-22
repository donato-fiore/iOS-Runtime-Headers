// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSUSERNOTIFICATIONSETTINGSITEM_H
#define AMSUSERNOTIFICATIONSETTINGSITEM_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface AMSUserNotificationSettingsItem : NSObject

@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSDictionary *updateDictionary;
@property (nonatomic) BOOL userChanged; // ivar: _userChanged


-(id)description;
-(id)initWithIdentifier:(id)arg0 dictionaryRepresentation:(id)arg1 ;
-(id)initWithIdentifier:(id)arg0 enabled:(BOOL)arg1 ;


@end


#endif