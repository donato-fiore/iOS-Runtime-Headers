// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPSOFTWAREDIAGNOSTICSCLUSTERSOFTWAREFAULTSTRUCT_H
#define CHIPSOFTWAREDIAGNOSTICSCLUSTERSOFTWAREFAULTSTRUCT_H

@class NSData, NSNumber, NSString;

#import <Foundation/Foundation.h>


@interface CHIPSoftwareDiagnosticsClusterSoftwareFaultStruct : NSObject

@property (retain, nonatomic) NSData *faultRecording; // ivar: _faultRecording
@property (retain, nonatomic) NSNumber *id; // ivar: _id
@property (retain, nonatomic) NSString *name; // ivar: _name


-(id)init;


@end


#endif