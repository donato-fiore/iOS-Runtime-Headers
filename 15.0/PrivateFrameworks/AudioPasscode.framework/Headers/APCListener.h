// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef APCLISTENER_H
#define APCLISTENER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AUPasscodeCodecConfiguration.h"
#import "APCListenerEngine.h"
#import "APCListenerResultData.h"

@interface APCListener : NSObject {
    AUPasscodeCodecConfiguration *_codecConfig;
    APCListenerEngine *_listenerEngine;
    APCListenerResultData *_resultData;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (copy, nonatomic) id *retrievedDataHandler; // ivar: _retrievedDataHandler


+(id)capabilityData;
-(BOOL)getResultData:(*id)arg0 ;
-(id)init;
-(id)initWithCodecConfiguration:(id)arg0 ;
-(id)initWithConfigurationData:(id)arg0 ;
-(void)startListening;
-(void)startListeningWithError:(*id)arg0 ;
-(void)stopListening;


@end


#endif