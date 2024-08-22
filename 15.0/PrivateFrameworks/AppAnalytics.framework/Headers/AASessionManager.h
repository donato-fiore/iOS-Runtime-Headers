// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AASESSIONMANAGER_H
#define AASESSIONMANAGER_H


#import <Foundation/Foundation.h>

#import "AAProcessorManager.h"
#import "AATracker.h"

@interface AASessionManager : NSObject {
    ? sessionManager;
}


@property (nonatomic, readonly) AAProcessorManager *processorManager; // ivar: processorManager
@property (nonatomic, readonly) AATracker *tracker; // ivar: tracker


-(id)init;
-(id)initWithAccessQueue:(id)arg0 ;
-(id)initWithAccessQueue:(id)arg0 privacyValidationProvider:(id)arg1 ;
-(id)initWithPrivacyValidationProvider:(id)arg0 ;


@end


#endif