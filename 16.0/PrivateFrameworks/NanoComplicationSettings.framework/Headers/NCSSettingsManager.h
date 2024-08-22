// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NCSSETTINGSMANAGER_H
#define NCSSETTINGSMANAGER_H

@protocol NCSSettingsManagerDelegate;


#import "NCSInternalSettingsManager.h"

@interface NCSSettingsManager : NCSInternalSettingsManager

@property (weak, nonatomic) NSObject<NCSSettingsManagerDelegate> *delegate; // ivar: _delegate


+(id)sharedSettingsManager;
-(id)_fetchSockPuppetComplications;
-(id)init;
-(void)_handleLocaleChange:(id)arg0 ;
-(void)_updateSockPuppetComplications;
-(void)dealloc;
-(void)loadSettings;


@end


#endif