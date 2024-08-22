// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SNDIRECTIONOFARRIVALRESULT_H
#define SNDIRECTIONOFARRIVALRESULT_H

@class NSString, NSArray;
@protocol NSCopying, NSSecureCoding, SNTimeRangeProvidingWritable, SNTimeRangeProviding;

#import <Foundation/Foundation.h>


@interface SNDirectionOfArrivalResult : NSObject <NSCopying, NSSecureCoding, SNTimeRangeProvidingWritable, SNTimeRangeProviding>



@property (nonatomic) float azimuth; // ivar: _azimuth
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *spatialSpectrum; // ivar: _spatialSpectrum
@property (readonly) Class superclass;
@property (nonatomic) ? timeRange; // ivar: _timeRange


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToDirectionOfArrivalResult:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif