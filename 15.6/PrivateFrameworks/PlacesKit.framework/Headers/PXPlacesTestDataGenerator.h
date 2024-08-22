// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXPLACESTESTDATAGENERATOR_H
#define PXPLACESTESTDATAGENERATOR_H

@class NSArray, NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PXPlacesTestDataGenerator : NSObject {
    NSObject<OS_dispatch_queue> *_generationQueue;
    NSArray *_latOffsets;
    NSArray *_longOffsets;
    NSUInteger _max;
    CLLocationCoordinate2D _from;
    CLLocationCoordinate2D _to;
    NSMutableArray *_dataPoints;
}




-(NSUInteger)generateDataPointsFromLocation:(struct CLLocationCoordinate2D )arg0 toLocation:(struct CLLocationCoordinate2D )arg1 longDir:(NSInteger)arg2 currentCount:(NSUInteger)arg3 ;
-(id)generateOffsetArray:(CGFloat)arg0 insert:(BOOL)arg1 ;
-(id)init;
-(void)generateTestImages:(NSUInteger)arg0 fromLocation:(struct CLLocationCoordinate2D )arg1 toLocation:(struct CLLocationCoordinate2D )arg2 atEnd:(id)arg3 ;


@end


#endif