// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWTRACKEDFACE_H
#define BWTRACKEDFACE_H


#import <Foundation/Foundation.h>


@interface BWTrackedFace : NSObject {
    float _trackingDistance;
    CGRect _detectionRect;
    float _sizeToDistanceMultiplier;
}


@property (readonly, nonatomic) id *detectionID; // ivar: _detectionID
@property (nonatomic) CGRect detectionRect;
@property (readonly, nonatomic) float distance; // ivar: _distance
@property (readonly, nonatomic) float size; // ivar: _size
@property (nonatomic) float trackingDistance;
@property (retain, nonatomic) id *trackingID; // ivar: _trackingID
@property (nonatomic) CGRect trackingRect; // ivar: _trackingRect


-(void)dealloc;


@end


#endif