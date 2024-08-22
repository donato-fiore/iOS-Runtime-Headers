// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HAECGEXPORTER_H
#define HAECGEXPORTER_H

@class NSMutableArray, NSString;
@protocol SRMultiSampleExporting;

#import <Foundation/Foundation.h>


@interface HAECGExporter : NSObject <SRMultiSampleExporting>

 {
    unique_ptr<CinnAlgs::CnAlgs, std::default_delete<CinnAlgs::CnAlgs>> _cinAlgs;
    NSMutableArray *_currentLiveWaveform;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL fromRightWrist; // ivar: _fromRightWrist
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)dumpCurrentWaveform;
-(id)sr_dictionaryRepresentationWithSample:(id)arg0 ;
-(id)sr_endMultiSampleStream;
-(void)handleRealtimeSamples:(*float)arg0 count:(unsigned int)arg1 startTimestamp:(NSUInteger)arg2 ;
-(void)resetFilter;
-(void)sr_beginMultiSampleStream;


@end


#endif