// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXPIFINGEREVENTSENDER_H
#define AXPIFINGEREVENTSENDER_H

@class NSString, HIDVirtualEventService, NSDictionary;
@protocol HIDVirtualEventServiceDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AXPIFingerEventSender : NSObject <HIDVirtualEventServiceDelegate>

 {
    NSInteger _eventGenerationCount;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *displayUUID; // ivar: _displayUUID
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *eventSendingQueue; // ivar: _eventSendingQueue
@property (retain, nonatomic) HIDVirtualEventService *eventService; // ivar: _eventService
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDictionary *properties; // ivar: _properties
@property (nonatomic) NSUInteger senderID; // ivar: _senderID
@property (nonatomic) BOOL shouldAddRealEventFlag; // ivar: _shouldAddRealEventFlag
@property (readonly) Class superclass;


-(BOOL)setOutputEvent:(id)arg0 forService:(id)arg1 ;
-(BOOL)setProperty:(id)arg0 forKey:(id)arg1 forService:(id)arg2 ;
-(id)_assignFingerIdentifiersToTouches:(id)arg0 ;
-(id)copyEventMatching:(id)arg0 forService:(id)arg1 ;
-(id)init;
-(id)initWithDisplayUUID:(id)arg0 ;
-(id)propertyForKey:(id)arg0 forService:(id)arg1 ;
-(void)_sendHandEvent:(unsigned int)arg0 touchesByFingerIdentifier:(id)arg1 ;
-(void)dealloc;
-(void)notification:(NSInteger)arg0 withProperty:(id)arg1 forService:(id)arg2 ;
-(void)performCancel;
-(void)performDownWithTouches:(id)arg0 ;
-(void)performDownWithTouchesByFingerIdentifier:(id)arg0 ;
-(void)performMoveWithTouches:(id)arg0 ;
-(void)performMoveWithTouchesByFingerIdentifier:(id)arg0 ;
-(void)performUpWithTouches:(id)arg0 ;
-(void)performUpWithTouchesByFingerIdentifier:(id)arg0 ;
-(void)startNewGeneration;


@end


#endif