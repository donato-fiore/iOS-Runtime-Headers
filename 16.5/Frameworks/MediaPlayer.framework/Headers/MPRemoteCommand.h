// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPREMOTECOMMAND_H
#define MPREMOTECOMMAND_H

@class NSMutableDictionary, NSString, NSArray;
@protocol NSObject, OS_dispatch_queue, MPRemoteCommandDelegate_Internal, MPRemoteCommandDelegate_Private;

#import <Foundation/Foundation.h>


@interface MPRemoteCommand : NSObject <NSObject>

 {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableDictionary *_handlers;
}


@property (weak, nonatomic) NSObject<MPRemoteCommandDelegate_Internal> *commandCenterDelegate; // ivar: _commandCenterDelegate
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MPRemoteCommandDelegate_Private> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger disabledReason; // ivar: _disabledReason
@property (copy, nonatomic) NSArray *disabledReasons; // ivar: _disabledReasons
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (nonatomic, getter=isForceDisabled) BOOL forceDisabled; // ivar: _forceDisabled
@property (readonly, nonatomic) BOOL hasTargets;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) unsigned int mediaRemoteCommandType; // ivar: _mediaRemoteCommandType
@property (nonatomic) BOOL skipSerializedEventDelivery; // ivar: _skipSerializedEventDelivery
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isSupported) BOOL supported;
@property (readonly, nonatomic, getter=isSupportedAndEnabled) BOOL supportedAndEnabled;
@property (nonatomic) CGFloat timeout; // ivar: _timeout
@property (copy, nonatomic) NSArray *unsupportedReasons; // ivar: _unsupportedReasons


-(BOOL)isEnabledForContentItemIdentifier:(id)arg0 ;
-(BOOL)isSupportedForContentItemIdentifier:(id)arg0 ;
-(id)_mediaRemoteCommandInfo;
-(id)_mediaRemoteCommandInfoOptions;
-(id)_stateDumpObject;
-(id)addTargetWithHandler:(id)arg0 ;
-(id)commandInfoRepresentations;
-(id)initWithMediaRemoteCommandType:(unsigned int)arg0 ;
-(id)newCommandEvent;
-(id)newCommandEventWithCommandType:(unsigned int)arg0 options:(id)arg1 ;
-(id)newCommandEventWithContentItemIdentifier:(id)arg0 ;
-(id)newCommandEventWithPlaybackQueueOffset:(NSInteger)arg0 ;
-(id)newSeekCommandEventWithType:(NSUInteger)arg0 ;
-(void)addTarget:(id)arg0 action:(SEL)arg1 ;
-(void)addTarget:(id)arg0 action:(SEL)arg1 usingExtendedStatus:(BOOL)arg2 ;
-(void)invokeCommandWithEvent:(id)arg0 completion:(id)arg1 ;
-(void)notifyPropagatablePropertyChanged;
-(void)removeTarget:(id)arg0 ;
-(void)removeTarget:(id)arg0 action:(SEL)arg1 ;


@end


#endif