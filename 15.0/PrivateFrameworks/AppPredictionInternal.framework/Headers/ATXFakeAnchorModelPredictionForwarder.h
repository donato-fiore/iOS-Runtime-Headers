// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXFAKEANCHORMODELPREDICTIONFORWARDER_H
#define ATXFAKEANCHORMODELPREDICTIONFORWARDER_H

@class NSString, NSArray;
@protocol ATXAnchorModelPredictionForwarderProtocol;

#import <Foundation/Foundation.h>


@interface ATXFakeAnchorModelPredictionForwarder : NSObject <ATXAnchorModelPredictionForwarderProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *forwardedPredictions; // ivar: _forwardedPredictions
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)forwardPredictions:(id)arg0 ;


@end


#endif