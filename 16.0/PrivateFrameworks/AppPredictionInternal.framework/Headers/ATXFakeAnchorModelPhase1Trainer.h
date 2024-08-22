// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXFAKEANCHORMODELPHASE1TRAINER_H
#define ATXFAKEANCHORMODELPHASE1TRAINER_H

@class NSString;
@protocol ATXAnchorModelPhase1TrainerProtocol;

#import <Foundation/Foundation.h>


@interface ATXFakeAnchorModelPhase1Trainer : NSObject <ATXAnchorModelPhase1TrainerProtocol>

 {
    BOOL _phase1TrainerCalled;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)phase1TrainerCalled;
-(id)init;
-(id)trainPhase1;


@end


#endif