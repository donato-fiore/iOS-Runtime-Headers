// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8SETTINGSP33_D536CAB592FD6D1F6F74399A1DC2AD1D24SETTINGSPROTOCOLDISPATCH_H
#define _TTC8SETTINGSP33_D536CAB592FD6D1F6F74399A1DC2AD1D24SETTINGSPROTOCOLDISPATCH_H

@class SwiftObject;
@protocol _TtP8Settings23SettingsPrivateProtocol_, _TtP8Settings20SettingsHostProtocol_;



@interface _TtC8SettingsP33_D536CAB592FD6D1F6F74399A1DC2AD1D24SettingsProtocolDispatch : SwiftObject <_TtP8Settings23SettingsPrivateProtocol_>

 {
    ? target;
    ? hasPushedContent;
    ? shouldPopNavStackOnDisappear;
}


@property (nonatomic, retain) NSObject<_TtP8Settings20SettingsHostProtocol_> *settingsHost;


-(void)didUnselect;
-(void)handshake;
-(void)isCloudSyncEnabled:(id)arg0 ;
-(void)popNavigationStack;
-(void)setCloudSyncEnabled:(BOOL)arg0 ;
-(void)willSelect;
-(void)willSelectWithRevealElementKey:(id)arg0 ;


@end


#endif