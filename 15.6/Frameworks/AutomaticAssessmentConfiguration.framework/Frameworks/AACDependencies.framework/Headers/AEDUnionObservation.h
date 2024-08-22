// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AEDUNIONOBSERVATION_H
#define AEDUNIONOBSERVATION_H

@class NSArray;
@protocol AEDObservation;

#import <Foundation/Foundation.h>


@interface AEDUnionObservation : NSObject <AEDObservation>

 {
    NSArray *_observations;
}




-(void)dealloc;
-(void)invalidate;


@end


#endif