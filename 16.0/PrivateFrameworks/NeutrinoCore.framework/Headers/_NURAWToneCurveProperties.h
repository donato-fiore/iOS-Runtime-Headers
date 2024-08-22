// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _NURAWTONECURVEPROPERTIES_H
#define _NURAWTONECURVEPROPERTIES_H

@class NSData, NSNumber, CIFilter;

#import <Foundation/Foundation.h>


@interface _NURAWToneCurveProperties : NSObject {
    NSData *_boostCurveData;
    NSData *_aggregateCurveData;
    NSNumber *_gainMapExposure;
    CIFilter *_rawTRCFilter;
    CIFilter *_rawGainTableMapFilter;
}




-(float)_curveValueAt:(float)arg0 data:(id)arg1 ;
-(float)_inverseCurveValueAt:(float)arg0 data:(id)arg1 ;
-(float)boostCurveValueAt:(float)arg0 ;
-(float)inverseAggregatedCurveValueAt:(float)arg0 ;
-(id)_generateCurveDataFromFilters:(id)arg0 sampleCount:(NSUInteger)arg1 ;
-(id)_generateGainMapExposure;
-(id)aggregateCurveData;
-(id)boostCurveData;
-(id)initWithToneCurveFilter:(id)arg0 gainMapTableFilter:(id)arg1 ;


@end


#endif