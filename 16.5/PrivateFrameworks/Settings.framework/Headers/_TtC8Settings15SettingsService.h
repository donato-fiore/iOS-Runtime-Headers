// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8SETTINGS15SETTINGSSERVICE_H
#define _TTC8SETTINGS15SETTINGSSERVICE_H

@class SwiftObject;
@protocol _TtP8Settings23SettingsServiceProtocol_, _TtP8Settings27SettingsHostServiceProvider_;



@interface _TtC8Settings15SettingsService : SwiftObject <_TtP8Settings23SettingsServiceProtocol_>

 {
    ? extension;
    ? delegate;
    ? _connection;
}


@property (nonatomic, retain) NSObject<_TtP8Settings27SettingsHostServiceProvider_> *serviceHost; // ivar: serviceHost


-(void)filterSearchAnchorsForSidebarItem:(id)arg0 suggestedAnchors:(id)arg1 reply:(id)arg2 ;
-(void)getSidebarItems:(id)arg0 ;
-(void)getSidebarSections:(id)arg0 ;
-(void)isAvailable:(id)arg0 ;
-(void)openURL:(id)arg0 ;


@end


#endif