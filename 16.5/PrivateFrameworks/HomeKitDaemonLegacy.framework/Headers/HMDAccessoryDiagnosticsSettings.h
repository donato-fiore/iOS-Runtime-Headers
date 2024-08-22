// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDACCESSORYDIAGNOSTICSSETTINGS_H
#define HMDACCESSORYDIAGNOSTICSSETTINGS_H

@class HAPSupportedDiagnosticsSnapshot, NSString;

#import <Foundation/Foundation.h>

#import "HMDService.h"

@interface HMDAccessoryDiagnosticsSettings : NSObject

@property (retain) HAPSupportedDiagnosticsSnapshot *currentSnapshot; // ivar: _currentSnapshot
@property (readonly) HMDService *diagnosticsService; // ivar: _diagnosticsService
@property (readonly) NSString *transport; // ivar: _transport


-(id)attributeDescriptions;
-(id)initWithService:(id)arg0 ;


@end


#endif