// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCSWITCHMANAGER_H
#define VCSWITCHMANAGER_H


#import <Foundation/Foundation.h>


@interface VCSwitchManager : NSObject

@property unsigned int localSwitches; // ivar: _localSwitches
@property unsigned int negotiatedSwitches; // ivar: _negotiatedSwitches
@property unsigned int remoteSwitches; // ivar: _remoteSwitches


-(BOOL)isLocalSwitchEnabled:(unsigned int)arg0 ;
-(BOOL)isSwitchEnabled:(unsigned int)arg0 ;
-(id)description;
-(unsigned int)applyNegotiationRulesUsingLocalSwitches:(unsigned int)arg0 negotiatedSwitches:(unsigned int)arg1 ;
-(void)initializeLocalSwitches;
-(void)negotiateSwitches;
-(void)negotiateSwitchesForIsCaller:(BOOL)arg0 ;
-(void)setupLocalABTestSwitches;
-(void)setupLocalAudioTestGroupSwitches;
-(void)setupLocalDuplicationTestGroupSwitches;
-(void)setupLocalNetworkTestGroupSwitches;
-(void)setupLocalOnOffSwitches;
-(void)setupLocalOnOffSwitchesFromMasterSwitch;
-(void)setupLocalRateControlTestGroupSwitches;
-(void)setupLocalSwitchesIndividually;
-(void)setupLocalVideoTestGroupSwitches;
-(void)updateDuplicationEnhancementSwitches;


@end


#endif