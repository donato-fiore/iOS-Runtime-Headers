// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRSOFTWAREDIAGNOSTICSCLUSTERSOFTWAREFAULTEVENT_H
#define MTRSOFTWAREDIAGNOSTICSCLUSTERSOFTWAREFAULTEVENT_H

@class NSData, NSNumber, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTRSoftwareDiagnosticsClusterSoftwareFaultEvent : NSObject <NSCopying>



@property (copy, nonatomic) NSData *faultRecording; // ivar: _faultRecording
@property (copy, nonatomic) NSNumber *id; // ivar: _id
@property (copy, nonatomic) NSString *name; // ivar: _name


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif