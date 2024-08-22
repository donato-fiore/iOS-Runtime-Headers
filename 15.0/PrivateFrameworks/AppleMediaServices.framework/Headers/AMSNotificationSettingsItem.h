// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSNOTIFICATIONSETTINGSITEM_H
#define AMSNOTIFICATIONSETTINGSITEM_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface AMSNotificationSettingsItem : NSObject

@property (readonly, nonatomic) NSString *desc; // ivar: _desc
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) BOOL userChanged; // ivar: _userChanged


-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithTitle:(id)arg0 description:(id)arg1 identifier:(id)arg2 enabled:(BOOL)arg3 ;


@end


#endif