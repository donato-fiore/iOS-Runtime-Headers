// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SFPERSITEPREFERENCENOTIFYINGLISTCONTROLLER_H
#define _SFPERSITEPREFERENCENOTIFYINGLISTCONTROLLER_H

@class PSListController;



@interface _SFPerSitePreferenceNotifyingListController : PSListController



-(id)init;
-(void)_didUpdatePerSitePreferenceNotificationReceived:(id)arg0 ;
-(void)_didUpdatePerSitePreferenceRemotely:(id)arg0 ;
-(void)dealloc;
-(void)notifyPerSitePreferenceValueDidChange;
-(void)perSitePreferenceValueDidChange;


@end


#endif