// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FPDTELEMETRYSERVICE_H
#define FPDTELEMETRYSERVICE_H


#import <Foundation/Foundation.h>

#import "FPDExtensionManager.h"

@interface FPDTelemetryService : NSObject

@property (retain, nonatomic) FPDExtensionManager *extensionManager; // ivar: _extensionManager


-(void)start;


@end


#endif