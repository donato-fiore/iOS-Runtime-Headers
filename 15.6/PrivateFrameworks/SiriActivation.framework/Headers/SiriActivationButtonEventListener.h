// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRIACTIVATIONBUTTONEVENTLISTENER_H
#define SIRIACTIVATIONBUTTONEVENTLISTENER_H

@class NSMutableDictionary;


#import "SiriActivationSource.h"

@interface SiriActivationButtonEventListener : SiriActivationSource

@property (retain, nonatomic) NSMutableDictionary *listeners; // ivar: _listeners


+(id)listener;
-(id)_init;
-(id)connection;
-(void)_registerListenerWithIdentifier:(id)arg0 ;
-(void)buttonDownWithButtonIdentifier:(id)arg0 forListenerIdentifier:(id)arg1 atTimestamp:(id)arg2 ;
-(void)buttonLongPressWithButtonIdentifier:(id)arg0 forListenerIdentifier:(id)arg1 atTimestamp:(id)arg2 ;
-(void)buttonUpWithButtonIdentifier:(id)arg0 forListenerIdentifier:(id)arg1 atTimestamp:(id)arg2 ;
-(void)configureConnectionForIdentifier:(id)arg0 ;
-(void)invalidate;
-(void)invalidatedAtTimestamp:(CGFloat)arg0 ;
-(void)registerWithListener:(id)arg0 identifier:(id)arg1 ;
-(void)unregisterListenerWithIdentifier:(id)arg0 ;


@end


#endif