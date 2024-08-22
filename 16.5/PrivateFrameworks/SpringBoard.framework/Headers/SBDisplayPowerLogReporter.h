// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBDISPLAYPOWERLOGREPORTER_H
#define SBDISPLAYPOWERLOGREPORTER_H

@class NSMutableDictionary;
@protocol BSInvalidatable, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SBDisplayPowerLogReporter : NSObject {
    NSMutableDictionary *_displayNameToPowerLogEntry;
    id<BSInvalidatable> *_stateCaptureAssertion;
    NSObject<OS_dispatch_queue> *_powerLogSendQueue;
}




-(id)description;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(void)reportPowerLogEntry:(id)arg0 ;


@end


#endif