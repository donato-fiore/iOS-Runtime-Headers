// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IPWATCHLOCALECONTROLLER_H
#define IPWATCHLOCALECONTROLLER_H

@class NPSDomainAccessor, NPSManager, NSArray;

#import <Foundation/Foundation.h>


@interface IPWatchLocaleController : NSObject

@property (retain, nonatomic) NPSDomainAccessor *gizmoGlobalDomain; // ivar: _gizmoGlobalDomain
@property (retain, nonatomic) NPSManager *syncManager; // ivar: _syncManager
@property (retain, nonatomic) NSArray *systemLanguages; // ivar: _systemLanguages


-(BOOL)isMirroringEnabled;
-(id)deviceLanguage;
-(id)init;
-(id)initWithSystemLanguages:(id)arg0 ;
-(id)preferredLanguages;
-(void)initializeMirrorSettings;
-(void)mirrorLanguagesAndLocaleToWatch;
-(void)postLocaleChangedNotification;
-(void)resetTimeFormat;
-(void)setLanguages:(id)arg0 ;
-(void)setLocale:(id)arg0 ;
-(void)updateLocale:(id)arg0 ;


@end


#endif