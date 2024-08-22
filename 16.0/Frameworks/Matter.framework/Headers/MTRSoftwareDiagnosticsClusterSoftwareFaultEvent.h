// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRSOFTWAREDIAGNOSTICSCLUSTERSOFTWAREFAULTEVENT_H
#define MTRSOFTWAREDIAGNOSTICSCLUSTERSOFTWAREFAULTEVENT_H

@class NSData, NSNumber, NSString;

#import <Foundation/Foundation.h>


@interface MTRSoftwareDiagnosticsClusterSoftwareFaultEvent : NSObject

@property (retain, nonatomic) NSData *faultRecording; // ivar: _faultRecording
@property (retain, nonatomic) NSNumber *id; // ivar: _id
@property (retain, nonatomic) NSString *name; // ivar: _name


-(id)description;
-(id)init;


@end


#endif