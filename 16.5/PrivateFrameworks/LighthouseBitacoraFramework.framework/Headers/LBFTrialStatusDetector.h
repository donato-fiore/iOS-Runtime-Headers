// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LBFTRIALSTATUSDETECTOR_H
#define LBFTRIALSTATUSDETECTOR_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface LBFTrialStatusDetector : NSObject

@property (readonly, nonatomic) NSDictionary *observedTrialStatusHolder; // ivar: _observedTrialStatusHolder


-(id)getTrialStatus:(id)arg0 deploymentId:(id)arg1 ;
-(id)init;


@end


#endif