// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AFAUDIOSESSIONASSERTIONREMOTEACQUISITIONSERVICE_H
#define AFAUDIOSESSIONASSERTIONREMOTEACQUISITIONSERVICE_H

@class NSString;
@protocol AFAudioSessionAssertionAcquisitionService;

#import <Foundation/Foundation.h>

#import "AFInstanceContext.h"

@interface AFAudioSessionAssertionRemoteAcquisitionService : NSObject <AFAudioSessionAssertionAcquisitionService>

 {
    AFInstanceContext *_instanceContext;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)acquireAudioSessionAssertionWithContext:(id)arg0 relinquishmentHandler:(id)arg1 ;
-(id)initWithInstanceContext:(id)arg0 ;


@end


#endif