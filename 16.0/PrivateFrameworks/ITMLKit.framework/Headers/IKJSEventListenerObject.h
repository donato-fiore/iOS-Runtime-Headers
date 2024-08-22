// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IKJSEVENTLISTENEROBJECT_H
#define IKJSEVENTLISTENEROBJECT_H

@class NSMutableDictionary;
@protocol IKJSEventListenerObject;


#import "IKJSObject.h"

@interface IKJSEventListenerObject : IKJSObject <IKJSEventListenerObject>



@property (retain, nonatomic) NSMutableDictionary *eventListenersMap; // ivar: _eventListenersMap


-(BOOL)_searchEventListener:(id)arg0 key:(id)arg1 destroy:(BOOL)arg2 ;
-(BOOL)invokeListeners:(id)arg0 extraInfo:(id)arg1 ;
-(BOOL)invokeMethod:(id)arg0 withArguments:(id)arg1 thenDispatchEvent:(id)arg2 extraInfo:(id)arg3 ;
-(BOOL)invokeSingleListener:(id)arg0 extraInfo:(id)arg1 return:(*id)arg2 ;
-(id)_eventInformationForType:(id)arg0 extraInfo:(id)arg1 ;
-(void)addEventListener:(id)arg0 ;
-(void)removeEventListener:(id)arg0 ;


@end


#endif