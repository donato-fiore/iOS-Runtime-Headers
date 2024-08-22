// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DNDSSETTINGSMANAGER_H
#define DNDSSETTINGSMANAGER_H

@class CNContactStore, NSString;
@protocol DNDSSyncSettingsProviderDelegate, DNDSSysdiagnoseDataProvider, OS_dispatch_queue, DNDSBackingStore, DNDSSettingsManagerDelegate;

#import <Foundation/Foundation.h>

#import "DNDSSyncSettingsProvider.h"

@interface DNDSSettingsManager : NSObject <DNDSSyncSettingsProviderDelegate, DNDSSysdiagnoseDataProvider>

 {
    NSObject<OS_dispatch_queue> *_queue;
    id<DNDSBackingStore> *_backingStore;
    CNContactStore *_contactStore;
    DNDSSyncSettingsProvider *_syncSettingsProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<DNDSSettingsManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *sysdiagnoseDataIdentifier;


-(BOOL)setBehaviorSettings:(id)arg0 withError:(*id)arg1 ;
-(BOOL)setScheduleSettings:(id)arg0 withError:(*id)arg1 ;
-(NSUInteger)_saveBehaviorSettings:(id)arg0 scheduleSettings:(id)arg1 error:(*id)arg2 ;
-(NSUInteger)_saveConfiguration:(id)arg0 forModeIdentifier:(id)arg1 error:(*id)arg2 ;
-(NSUInteger)_writeSettingsRecord:(id)arg0 error:(*id)arg1 ;
-(id)_readSettingsReturningError:(*id)arg0 ;
-(id)behaviorSettingsWithError:(*id)arg0 ;
-(id)fallbackConfiguration;
-(id)initWithBackingStore:(id)arg0 contactStore:(id)arg1 ;
-(id)phoneCallBypassSettingsWithError:(*id)arg0 ;
-(id)scheduleSettingsWithError:(*id)arg0 ;
-(id)syncSettingsWithError:(*id)arg0 ;
-(id)sysdiagnoseDataForDate:(id)arg0 redacted:(BOOL)arg1 ;
-(void)dealloc;
-(void)pairedDeviceDidChange;
-(void)setPairSyncEnabled:(BOOL)arg0 ;
-(void)syncSettingsProvider:(id)arg0 didReceiveUpdatedSyncSettings:(id)arg1 ;


@end


#endif