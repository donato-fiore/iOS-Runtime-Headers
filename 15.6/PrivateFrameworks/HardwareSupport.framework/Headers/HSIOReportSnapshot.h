// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HSIOREPORTSNAPSHOT_H
#define HSIOREPORTSNAPSHOT_H

@class NSArray;


#import "HSIOReport.h"

@interface HSIOReportSnapshot : HSIOReport

@property (retain, nonatomic) NSArray *samples; // ivar: _samples


+(id)report:(*id)arg0 ;
+(id)reportWithOnlySimpleChannels:(*id)arg0 ;
+(id)snapshotReport:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSnapshot:(id)arg0 ;
-(NSUInteger)hash;
-(id)reportWithOnlySimpleChannels;
-(id)snapshotByFilteringSamples:(id)arg0 ;
-(id)snapshotWithBaseline:(id)arg0 error:(*id)arg1 ;


@end


#endif