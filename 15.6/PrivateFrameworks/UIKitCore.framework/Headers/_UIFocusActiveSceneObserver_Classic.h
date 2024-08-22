// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIFOCUSACTIVESCENEOBSERVER_CLASSIC_H
#define _UIFOCUSACTIVESCENEOBSERVER_CLASSIC_H

@class UIFocusActiveSceneObserver, NSMapTable, NSString;
@protocol BKSHIDEventDeliveryPolicyObserving;



@interface _UIFocusActiveSceneObserver_Classic : UIFocusActiveSceneObserver <BKSHIDEventDeliveryPolicyObserving>

 {
    NSMapTable *_hidObserverMapTable;
    ? _flags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isActive;
-(id)_initWithScene:(id)arg0 ;
-(void)_addDeliveryObserverForWindow:(id)arg0 ;
-(void)_keyWindowDidChangeNotification:(id)arg0 ;
-(void)_removeDeliverObserverForWindow:(id)arg0 ;
-(void)_windowDidAttachContext:(id)arg0 ;
-(void)_windowDidDetachContext:(id)arg0 ;
-(void)beginMonitoringContextChangesForWindow:(id)arg0 ;
-(void)dealloc;
-(void)observerDeliveryPolicyDidChange:(id)arg0 ;
-(void)stopMonitoringContextChangesForWindow:(id)arg0 ;


@end


#endif