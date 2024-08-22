// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFBIOMEABSTRACTFETCHREQUEST_H
#define HFBIOMEABSTRACTFETCHREQUEST_H

@class HMAccessory, BMHomeKitClientAccessoryControlStream, HMHome, HMRoom, HMService, HMZone;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HFBiomeAbstractFetchRequest : NSObject

@property (retain) HMAccessory *accessory; // ivar: _accessory
@property (readonly) BMHomeKitClientAccessoryControlStream *accessoryControlStream; // ivar: _accessoryControlStream
@property (readonly) HMHome *home; // ivar: _home
@property (retain) HMRoom *room; // ivar: _room
@property (retain) HMService *service; // ivar: _service
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue
@property (retain) HMZone *zone; // ivar: _zone


-(BOOL)publisherFilter:(id)arg0 ;
-(id)fetch;
-(id)init;
-(id)initWithHome:(id)arg0 ;
-(id)successHandler;
-(void)_fetchWithPromise:(id)arg0 ;
-(void)eventHandler:(id)arg0 ;


@end


#endif