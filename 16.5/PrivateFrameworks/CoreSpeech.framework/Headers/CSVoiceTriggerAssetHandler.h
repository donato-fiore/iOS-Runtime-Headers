// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSVOICETRIGGERASSETHANDLER_H
#define CSVOICETRIGGERASSETHANDLER_H

@class NSHashTable;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CSVoiceTriggerAssetHandler : NSObject

@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


+(id)sharedHandler;
-(id)defaultFallbackModelIfNil:(id)arg0 ;
-(id)init;
-(void)getVoiceTriggerAssetWithEndpointId:(id)arg0 completion:(id)arg1 ;
-(void)notifyObservers:(id)arg0 endpointId:(id)arg1 ;
-(void)registerObserver:(id)arg0 ;
-(void)unregisterObserver:(id)arg0 ;


@end


#endif