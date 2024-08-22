// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MXMMETRIC_H
#define MXMMETRIC_H

@class NSString;
@protocol MXMProbeDelegate, MXMInstrumental, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "MXMProbe.h"
#import "MXMMutableSampleData.h"
#import "MXMSampleFilter.h"
#import "MXMInstrument.h"

@interface MXMMetric : NSObject <MXMProbeDelegate, MXMInstrumental, NSSecureCoding>

 {
    MXMProbe *_probe;
    NSString *_identifier;
    NSString *_version;
    NSString *_build;
    MXMMutableSampleData *_data;
}


@property (readonly, nonatomic) NSUInteger _sampleMode;
@property (readonly, nonatomic) BOOL _shouldAlwaysWrapInProxy;
@property (readonly, nonatomic) BOOL _shouldConstructProbe;
@property (readonly, nonatomic) BOOL _shouldNeverWrapInProxy;
@property (readonly, nonatomic) NSString *build;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) MXMSampleFilter *filter; // ivar: _filter
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) MXMInstrument *instrument;
@property (nonatomic) NSUInteger preferredSampleMode; // ivar: _preferredSampleMode
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *version;


+(BOOL)supportsSecureCoding;
-(BOOL)_shouldWrapInProxy;
-(BOOL)harvestData:(*id)arg0 error:(*id)arg1 ;
-(BOOL)prepareWithOptions:(id)arg0 error:(*id)arg1 ;
-(id)_constructProbe;
-(id)_getProbe;
-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 filter:(id)arg1 ;
-(void)didStartAtContinuousTime:(NSUInteger)arg0 absoluteTime:(NSUInteger)arg1 startDate:(id)arg2 ;
-(void)didStartAtTime:(NSUInteger)arg0 startDate:(id)arg1 ;
-(void)didStopAtContinuousTime:(NSUInteger)arg0 absoluteTime:(NSUInteger)arg1 stopDate:(id)arg2 ;
-(void)didStopAtTime:(NSUInteger)arg0 stopDate:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)probeDidUpdate:(id)arg0 data:(id)arg1 stop:(*BOOL)arg2 ;
-(void)willStartAtEstimatedTime:(NSUInteger)arg0 ;
-(void)willStop;


@end


#endif