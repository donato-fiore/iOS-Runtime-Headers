// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCPPERSONOBSERVATION_H
#define VCPPERSONOBSERVATION_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface VCPPersonObservation : NSObject

@property (nonatomic) float absoluteActionScore; // ivar: _absoluteActionScore
@property (retain, nonatomic) NSArray *keypoints; // ivar: _keypoints
@property (nonatomic) int personID; // ivar: _personID
@property (nonatomic) float relativeActionScore; // ivar: _relativeActionScore
@property (nonatomic) int revision; // ivar: _revision




@end


#endif