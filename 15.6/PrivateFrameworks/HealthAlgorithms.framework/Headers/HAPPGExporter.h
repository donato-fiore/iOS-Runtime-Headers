// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HAPPGEXPORTER_H
#define HAPPGEXPORTER_H

@class NSData, NSString;
@protocol SRSampleExporting, SRSampling;

#import <Foundation/Foundation.h>


@interface HAPPGExporter : NSObject <SRSampleExporting, SRSampling>

 {
    CGFloat _srTimestamp;
    NSData *_mimosaData;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithBinarySampleRepresentation:(id)arg0 metadata:(id)arg1 timestamp:(CGFloat)arg2 ;
-(id)sr_exportRepresentationEnumerator;


@end


#endif