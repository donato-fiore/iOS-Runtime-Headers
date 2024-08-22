// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCSPORTSPRIVACYCONFIGURATION_H
#define FCSPORTSPRIVACYCONFIGURATION_H


#import <Foundation/Foundation.h>


@interface FCSportsPrivacyConfiguration : NSObject

@property (readonly, nonatomic) CGFloat headlineExposureNoiseRate; // ivar: _headlineExposureNoiseRate
@property (readonly, nonatomic) BOOL isHeadlineExposureTrackingDisabled; // ivar: _isHeadlineExposureTrackingDisabled
@property (readonly, nonatomic) CGFloat syncEventSamplingRate; // ivar: _syncEventSamplingRate


-(id)init;
-(id)initWithConfigDictionary:(id)arg0 ;


@end


#endif