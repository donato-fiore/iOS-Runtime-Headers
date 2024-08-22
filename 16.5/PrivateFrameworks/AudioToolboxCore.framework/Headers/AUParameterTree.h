// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AUPARAMETERTREE_H
#define AUPARAMETERTREE_H

@class NSXPCConnection;
@protocol NSSecureCoding, OS_dispatch_queue;


#import "AUParameterGroup.h"
#import "AUAudioUnit_XH.h"

@interface AUParameterTree : AUParameterGroup <NSSecureCoding>

 {
    shared_ptr<AUObserverController> _observerController;
    ? _addrToParamIndex;
}


@property (weak, nonatomic) AUAudioUnit_XH *_auXH; // ivar: __auXH
@property (nonatomic) int _autoCreatedForV2AU; // ivar: __autoCreatedForV2AU
@property ? addrToParamIndex;
@property (nonatomic) int numRecorders; // ivar: _numRecorders
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *observationQueue; // ivar: _observationQueue
@property (nonatomic) *AURemoteParameterObserver remoteObserverToken; // ivar: _remoteObserverToken
@property (weak, nonatomic) NSXPCConnection *remoteParameterSynchronizerXPCConnection; // ivar: _remoteParameterSynchronizerXPCConnection
@property (nonatomic) *AURemoteParameterObserver remoteRecorderToken; // ivar: _remoteRecorderToken
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *valueAccessQueue; // ivar: _valueAccessQueue


+(id)createGroupTemplate:(id)arg0 ;
+(id)createGroupWithIdentifier:(id)arg0 name:(id)arg1 children:(id)arg2 ;
+(id)createParameterWithIdentifier:(id)arg0 name:(id)arg1 address:(NSUInteger)arg2 min:(float)arg3 max:(float)arg4 unit:(unsigned int)arg5 unitName:(id)arg6 flags:(unsigned int)arg7 valueStrings:(id)arg8 dependentParameters:(id)arg9 ;
+(id)createTreeWithChildren:(id)arg0 ;
-(id)initWithChildren:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)parameterWithAddress:(NSUInteger)arg0 ;
-(id)parameterWithID:(unsigned int)arg0 scope:(unsigned int)arg1 element:(unsigned int)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)remoteSyncParameter:(NSUInteger)arg0 value:(float)arg1 extOriginator:(NSUInteger)arg2 hostTime:(NSUInteger)arg3 eventType:(unsigned int)arg4 ;


@end


#endif