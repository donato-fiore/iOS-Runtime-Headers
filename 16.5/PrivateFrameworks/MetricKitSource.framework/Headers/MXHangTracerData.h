// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MXHANGTRACERDATA_H
#define MXHANGTRACERDATA_H

@class MXAppLaunchDiagnostic, MXHangDiagnostic;


#import "MXSourceData.h"

@interface MXHangTracerData : MXSourceData

@property (retain) MXAppLaunchDiagnostic *appLaunchDiagnostic; // ivar: _appLaunchDiagnostic
@property (retain) MXHangDiagnostic *hangDiagnostic; // ivar: _hangDiagnostic


+(BOOL)supportsSecureCoding;
-(id)initPayloadDataWithDiagnostics:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif