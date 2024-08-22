// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BKHIDEVENTDELIVERYSEQUENCE_H
#define BKHIDEVENTDELIVERYSEQUENCE_H

@class NSMutableSet, NSString, BKSHIDEventKeyCommand;
@protocol BSDescriptionStreamable, NSCopying, BKHIDEventSenderInfo, BKHIDEventDispatcher, BKHIDBufferedEventProcessor;

#import <Foundation/Foundation.h>

#import "BKHIDEventDeliveryManager.h"

@interface BKHIDEventDeliverySequence : NSObject <BSDescriptionStreamable, NSCopying>

 {
    id<BKHIDEventSenderInfo> *_senderInfo;
    BKHIDEventDeliveryManager *_deliveryManager;
    id *_additionalContext;
    NSMutableSet *_currentBuffers;
    NSMutableSet *_buffersWithIncompleteSequences;
    NSMutableSet *_currentResolutions;
    NSMutableSet *_resolutionsWithIncompleteSequences;
    NSMutableSet *_repostedToBuffers;
    *__IOHIDEvent _firstEvent;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<BKHIDEventDispatcher> *dispatcher; // ivar: _dispatcher
@property (readonly) id *firstAdditionalContext; // ivar: _firstAdditionalContext
@property (readonly) NSUInteger hash;
@property (readonly) BKSHIDEventKeyCommand *keyCommand; // ivar: _keyCommand
@property (readonly) NSObject<BKHIDBufferedEventProcessor> *processor; // ivar: _processor
@property (readonly) Class superclass;


-(id)buffers;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithProcessor:(id)arg0 dispatcher:(id)arg1 senderInfo:(id)arg2 additionalContext:(id)arg3 keyCommand:(id)arg4 deliveryManager:(id)arg5 resolutions:(id)arg6 buffers:(id)arg7 ;
-(id)resolutions;
-(void)_resolveDispatchTargetsToBuffers;
-(void)_resolveDispatchTargetsToBuffers:(id)arg0 repostFirstEvent:(BOOL)arg1 ;
-(void)appendDescriptionToFormatter:(id)arg0 ;
-(void)bufferDidDrain:(id)arg0 ;
-(void)dealloc;
-(void)postEvent:(struct __IOHIDEvent *)arg0 position:(NSInteger)arg1 additionalContext:(id)arg2 ;
-(void)postEvent:(struct __IOHIDEvent *)arg0 position:(NSInteger)arg1 additionalContext:(id)arg2 fromBuffer:(id)arg3 toResolution:(id)arg4 ;
-(void)repostFirstEventToBufferedTargets:(id)arg0 ;


@end


#endif