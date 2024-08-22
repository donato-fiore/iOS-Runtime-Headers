// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DTOBJECTALLOCSERVICE_H
#define DTOBJECTALLOCSERVICE_H

@class DTXService, NSString;
@protocol DTObjectAllocServiceLegacyAPI, DTObjectAllocServiceAuthorizedAPI;


#import "DTAllocationsRecorder.h"

@interface DTObjectAllocService : DTXService <DTObjectAllocServiceLegacyAPI, DTObjectAllocServiceAuthorizedAPI>

 {
    unsigned int _task;
    DTAllocationsRecorder *_recorder;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)registerCapabilities:(id)arg0 ;
-(id)attachToPid:(id)arg0 eventsMask:(id)arg1 ;
-(id)initWithChannel:(id)arg0 ;
-(id)preparedEnvironmentForLaunch:(id)arg0 eventsMask:(id)arg1 ;
-(void)messageReceived:(id)arg0 ;
-(void)startCollectionWithPid:(int)arg0 ;
-(void)stopCollection;


@end


#endif