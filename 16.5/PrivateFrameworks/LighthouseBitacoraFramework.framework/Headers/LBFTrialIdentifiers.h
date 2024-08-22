// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LBFTRIALIDENTIFIERS_H
#define LBFTRIALIDENTIFIERS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface LBFTrialIdentifiers : NSObject

@property (readonly, nonatomic) NSString *deploymentID; // ivar: _deploymentID
@property (readonly, nonatomic) NSString *experimentID; // ivar: _experimentID
@property (readonly, nonatomic) NSInteger identifierType; // ivar: _identifierType
@property (readonly, nonatomic) NSString *treatmentID; // ivar: _treatmentID
@property (readonly, nonatomic) NSString *trialTaskID; // ivar: _trialTaskID


-(id)initWithBMLTTaskID:(id)arg0 deploymentID:(int)arg1 ;
-(id)initWithExperimentID:(id)arg0 deploymentID:(int)arg1 treatmentID:(id)arg2 ;


@end


#endif