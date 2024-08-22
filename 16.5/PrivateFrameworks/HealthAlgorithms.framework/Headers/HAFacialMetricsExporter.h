// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HAFACIALMETRICSEXPORTER_H
#define HAFACIALMETRICSEXPORTER_H

@class NSData, NSString;
@protocol SRSampling, SRSampleExporting;

#import <Foundation/Foundation.h>


@interface HAFacialMetricsExporter : NSObject <SRSampling, SRSampleExporting>



@property (readonly, nonatomic) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *packet; // ivar: _packet
@property (readonly, nonatomic) unsigned int packetType; // ivar: _packetType
@property (readonly) Class superclass;


-(id)initWithBinarySampleRepresentation:(id)arg0 metadata:(id)arg1 timestamp:(CGFloat)arg2 ;
-(id)sr_dictionaryRepresentation;


@end


#endif