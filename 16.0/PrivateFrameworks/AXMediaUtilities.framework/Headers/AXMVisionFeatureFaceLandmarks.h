// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXMVISIONFEATUREFACELANDMARKS_H
#define AXMVISIONFEATUREFACELANDMARKS_H

@class NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AXMVisionFeatureFaceLandmarks : NSObject <NSSecureCoding>



@property (nonatomic) BOOL is3DLandmarks; // ivar: _is3DLandmarks
@property (retain, nonatomic) NSDictionary *results; // ivar: _results


+(BOOL)supportsSecureCoding;
+(id)unitTestingFaceLandmarksIs3D:(BOOL)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithVisionFaceLandmarks:(id)arg0 ;
-(id)localizedStringForLandmarkType:(NSUInteger)arg0 ;
-(id)pointValuesForFaceLandmarkType:(NSUInteger)arg0 ;
-(id)pointsArrayForRegion:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif