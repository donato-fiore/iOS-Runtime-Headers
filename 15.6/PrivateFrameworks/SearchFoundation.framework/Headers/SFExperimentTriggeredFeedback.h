// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFEXPERIMENTTRIGGEREDFEEDBACK_H
#define SFEXPERIMENTTRIGGEREDFEEDBACK_H



#import "SFFeedback.h"
#import "SFCounterfactualInfo.h"

@interface SFExperimentTriggeredFeedback : SFFeedback

@property (retain, nonatomic) SFCounterfactualInfo *counterfactual; // ivar: _counterfactual


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCfDiffered:(BOOL)arg0 cfUsed:(BOOL)arg1 cfError:(NSUInteger)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif