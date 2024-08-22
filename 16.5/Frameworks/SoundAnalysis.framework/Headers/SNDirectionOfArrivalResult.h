// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SNDIRECTIONOFARRIVALRESULT_H
#define SNDIRECTIONOFARRIVALRESULT_H

@class NSArray, NSString;
@protocol NSCopying, NSSecureCoding, SNTimeRangeProvidingWritable, SNResult, SNTimeRangeProviding;

#import <Foundation/Foundation.h>


@interface SNDirectionOfArrivalResult : NSObject <NSCopying, NSSecureCoding, SNTimeRangeProvidingWritable, SNResult, SNTimeRangeProviding>

 {
    float _azimuth;
    float _elevation;
    NSArray *_spatialSpectrum;
}


@property (readonly, nonatomic) float azimuth;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) float elevation;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *spatialSpectrum;
@property (readonly) Class superclass;
@property (nonatomic) ? timeRange; // ivar: _timeRange


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif