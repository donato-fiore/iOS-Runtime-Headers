// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MXMMEMORYMETRIC_H
#define MXMMEMORYMETRIC_H

@class NSNumber, NSString;


#import "MXMMetric.h"
#import "MXMInstrument.h"

@interface MXMMemoryMetric : MXMMetric

@property (readonly, copy, nonatomic) MXMInstrument *instrument;
@property (readonly, copy, nonatomic) NSNumber *processIdentifier;
@property (readonly, copy, nonatomic) NSString *processName;


+(id)currentProcess;
-(BOOL)_shouldConstructProbe;
-(id)_constructProbe;
-(id)initWithBundleIdentifier:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 filter:(id)arg1 ;
-(id)initWithProcessIdentifier:(int)arg0 ;
-(id)initWithProcessName:(id)arg0 ;
-(void)willStartAtEstimatedTime:(NSUInteger)arg0 ;


@end


#endif