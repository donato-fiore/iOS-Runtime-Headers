// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSREMORAVOICETRIGGEREVENTINFOPROVIDER_H
#define CSREMORAVOICETRIGGEREVENTINFOPROVIDER_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CSRemoraVoiceTriggerEventInfoProvider : NSObject

@property (retain, nonatomic) NSMutableDictionary *eventInfos; // ivar: _eventInfos
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


+(id)sharedInstance;
-(id)getVoiceTriggerEventInfoForEndpointId:(id)arg0 ;
-(id)init;
-(void)setVoiceTriggerEventInfo:(id)arg0 endpointId:(id)arg1 ;


@end


#endif