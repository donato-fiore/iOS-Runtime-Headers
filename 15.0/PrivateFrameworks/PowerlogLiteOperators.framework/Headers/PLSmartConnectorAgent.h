// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLSMARTCONNECTORAGENT_H
#define PLSMARTCONNECTORAGENT_H

@class PLAgent, NSString, NSNumber, NSData, PLIOKitOperatorComposition, PLTimer;



@interface PLSmartConnectorAgent : PLAgent

@property (retain) NSString *curModel; // ivar: _curModel
@property (retain) NSString *curName; // ivar: _curName
@property (retain) NSNumber *curStatus; // ivar: _curStatus
@property (retain) NSData *curVersion; // ivar: _curVersion
@property (readonly) PLIOKitOperatorComposition *iokitOrion; // ivar: _iokitOrion
@property (retain) NSString *preModel; // ivar: _preModel
@property (retain) NSString *preName; // ivar: _preName
@property (retain) NSNumber *preStatus; // ivar: _preStatus
@property (retain) NSData *preVersion; // ivar: _preVersion
@property (retain) PLTimer *timer; // ivar: _timer


+(id)entryEventForwardDefinitionEAStatus;
+(id)entryEventForwardDefinitionStatus;
+(id)entryEventForwardDefinitions;
+(void)load;
-(id)init;
-(void)externalAccessoryConnected:(id)arg0 ;
-(void)externalAccessoryDisconnected:(id)arg0 ;
-(void)initOperatorDependancies;
-(void)log;
-(void)logEventForwardEAAccessory:(id)arg0 ;
-(void)logEventForwardStatus:(id)arg0 withName:(id)arg1 withModel:(id)arg2 andVersionInfo:(id)arg3 ;
-(void)reArmCallback;


@end


#endif