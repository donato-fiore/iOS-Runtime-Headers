// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFSHOWWIDGETCONFIGURATIONEVENT_H
#define WFSHOWWIDGETCONFIGURATIONEVENT_H

@class NSString;


#import "WFEvent.h"

@interface WFShowWidgetConfigurationEvent : WFEvent

@property (copy, nonatomic) NSString *appBundleIdentifier; // ivar: _appBundleIdentifier
@property (copy, nonatomic) NSString *intentType; // ivar: _intentType
@property (copy, nonatomic) NSString *key; // ivar: _key
@property (copy, nonatomic) NSString *sizeClass; // ivar: _sizeClass


+(Class)codableEventClass;
-(id)initWithAppBundleIdentifier:(id)arg0 intentType:(id)arg1 sizeClass:(id)arg2 ;


@end


#endif