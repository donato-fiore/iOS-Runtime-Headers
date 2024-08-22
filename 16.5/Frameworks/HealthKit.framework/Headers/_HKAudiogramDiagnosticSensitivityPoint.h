// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HKAUDIOGRAMDIAGNOSTICSENSITIVITYPOINT_H
#define _HKAUDIOGRAMDIAGNOSTICSENSITIVITYPOINT_H


#import <Foundation/Foundation.h>


@interface _HKAudiogramDiagnosticSensitivityPoint : NSObject

@property (readonly, nonatomic) CGFloat earSensitivityDBHL; // ivar: _earSensitivityDBHL
@property (readonly, nonatomic) CGFloat frequencyHz; // ivar: _frequencyHz


-(id)initWithEarSensitivity:(id)arg0 frequency:(id)arg1 ;


@end


#endif