// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPSOFTWAREDIAGNOSTICSCLUSTERSOFTWAREFAULTEVENT_H
#define CHIPSOFTWAREDIAGNOSTICSCLUSTERSOFTWAREFAULTEVENT_H


#import <Foundation/Foundation.h>

#import "CHIPSoftwareDiagnosticsClusterSoftwareFaultStruct.h"

@interface CHIPSoftwareDiagnosticsClusterSoftwareFaultEvent : NSObject

@property (retain, nonatomic) CHIPSoftwareDiagnosticsClusterSoftwareFaultStruct *softwareFault; // ivar: _softwareFault


-(id)init;


@end


#endif