// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFHOMEKITSETTINGSVALUEMANAGER_H
#define HFHOMEKITSETTINGSVALUEMANAGER_H

@class NSSet, HMSettings, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface HFHomeKitSettingsValueManager : NSObject

@property (retain, nonatomic) NSSet *homeKitObjectIdentifiers; // ivar: _homeKitObjectIdentifiers
@property (readonly, nonatomic) NSSet *pendingWrites;
@property (retain, nonatomic) HMSettings *settings; // ivar: _settings
@property (retain, nonatomic) NSMutableDictionary *transactionStacks; // ivar: _transactionStacks


-(id)_valueForSetting:(id)arg0 logRead:(BOOL)arg1 ;
-(id)changeValueForSetting:(id)arg0 toValue:(id)arg1 ;
-(id)changeValueForSetting:(id)arg0 toValue:(id)arg1 changeType:(NSUInteger)arg2 ;
-(id)initWithSettings:(id)arg0 homeKitObjectIdentifiers:(id)arg1 ;
-(id)valueForSetting:(id)arg0 ;
-(id)valueForSettingAtKeyPath:(id)arg0 ;
-(void)_clearTransaction:(id)arg0 ;
-(void)_executeNextPendingWriteForSetting:(id)arg0 ;


@end


#endif