// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKSTEPWIFIPREFLIGHT_H
#define SKSTEPWIFIPREFLIGHT_H

@class NSString, CUEnvironment;
@protocol CUEnvironmentable, CULabelable, SKStepable, OS_dispatch_queue, CUMessaging;

#import <Foundation/Foundation.h>

#import "SKSetupBase.h"

@interface SKStepWiFiPreflight : NSObject <CUEnvironmentable, CULabelable, SKStepable>

 {
    *LogCategory _ucat;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (retain, nonatomic) CUEnvironment *environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (nonatomic) BOOL preventAppleWiFi; // ivar: _preventAppleWiFi
@property (copy, nonatomic) id *skCompletionHandler; // ivar: _skCompletionHandler
@property (retain, nonatomic) NSObject<CUMessaging> *skMessaging; // ivar: _skMessaging
@property (weak, nonatomic) SKSetupBase *skSetupObject; // ivar: _skSetupObject
@property (readonly) Class superclass;


-(BOOL)checkWiFiAndReturnError:(*id)arg0 ;
-(id)init;
-(void)activate;
-(void)dealloc;
-(void)invalidate;


@end


#endif