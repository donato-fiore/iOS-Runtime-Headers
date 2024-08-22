// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SRAMBIENTLIGHTSAMPLE_H
#define SRAMBIENTLIGHTSAMPLE_H

@class NSString, NSMeasurement;
@protocol SRSampleExporting, NSSecureCoding, SRSampling;

#import <Foundation/Foundation.h>


@interface SRAmbientLightSample : NSObject <SRSampleExporting, NSSecureCoding, SRSampling>

 {
    NSInteger _type;
}


@property (readonly) ? chromaticity; // ivar: _chromaticity
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSMeasurement *lux; // ivar: _lux
@property (readonly) NSInteger placement; // ivar: _placement
@property (readonly, copy) NSString *placementString;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *typeString;


+(BOOL)supportsSecureCoding;
-(id)binarySampleRepresentation;
-(id)initWithBinarySampleRepresentation:(id)arg0 metadata:(id)arg1 timestamp:(CGFloat)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSRALSSampleStruct:(struct ? *)arg0 ;
-(id)sr_dictionaryRepresentation;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif