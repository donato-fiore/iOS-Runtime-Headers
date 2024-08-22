// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARWORLDTRACKINGFEATUREPOINTDATA_H
#define ARWORLDTRACKINGFEATUREPOINTDATA_H

@class NSString;
@protocol ARResultData, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "ARPointCloud.h"

@interface ARWorldTrackingFeaturePointData : NSObject <ARResultData, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) ARPointCloud *featurePoints; // ivar: _featurePoints
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (retain, nonatomic) ARPointCloud *visionFeaturePoints; // ivar: _visionFeaturePoints


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTimestamp:(CGFloat)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif