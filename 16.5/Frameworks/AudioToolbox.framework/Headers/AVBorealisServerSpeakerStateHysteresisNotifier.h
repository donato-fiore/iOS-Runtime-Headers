// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVBOREALISSERVERSPEAKERSTATEHYSTERESISNOTIFIER_H
#define AVBOREALISSERVERSPEAKERSTATEHYSTERESISNOTIFIER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AVBorealisServerSpeakerStateHysteresisNotifier : NSObject

@property (nonatomic) NSInteger generation; // ivar: _generation
@property (nonatomic) float hysteresisDurationSeconds; // ivar: _hysteresisDurationSeconds
@property (nonatomic) BOOL lastStateSent; // ivar: _lastStateSent
@property (copy, nonatomic) id *notificationBlock; // ivar: _notificationBlock
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (nonatomic) BOOL speakerStateListeningEnabled; // ivar: _speakerStateListeningEnabled


-(id)initWithSerialQueue:(id)arg0 hysteresisDurationSeconds:(float)arg1 notificationBlock:(id)arg2 ;
-(void)callNotificationBlock:(BOOL)arg0 ;
-(void)sendState;
-(void)stateChanged:(BOOL)arg0 ;


@end


#endif