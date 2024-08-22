// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TESTPLCLUSTERABLE_H
#define TESTPLCLUSTERABLE_H

@class NSString, NSDate;
@protocol PLRegionsClusteringItem;

#import <Foundation/Foundation.h>


@interface TestPLClusterable : NSObject <PLRegionsClusteringItem>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CLLocationCoordinate2D pl_coordinate; // ivar: _pl_coordinate
@property (readonly, nonatomic) NSDate *pl_date; // ivar: _pl_date
@property (readonly, nonatomic) CGFloat pl_gpsHorizontalAccuracy; // ivar: _pl_gpsHorizontalAccuracy
@property (readonly, nonatomic) NSString *pl_uuid; // ivar: _pl_uuid
@property (readonly) Class superclass;


+(id)clusterableWithLatitude:(CGFloat)arg0 longitude:(CGFloat)arg1 time:(CGFloat)arg2 ;
-(id)initWithLatitude:(CGFloat)arg0 longitude:(CGFloat)arg1 time:(CGFloat)arg2 ;


@end


#endif