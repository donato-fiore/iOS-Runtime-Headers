// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EVALUATEDRULE_H
#define EVALUATEDRULE_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface evaluatedRule : NSObject

@property (retain, nonatomic) NSNumber *recipientUniqueID; // ivar: _recipientUniqueID
@property (nonatomic) NSInteger ruleLabel; // ivar: _ruleLabel
@property (nonatomic) float ruleScore; // ivar: _ruleScore


-(NSInteger)compare:(id)arg0 ;
-(id)initWithLabel:(NSInteger)arg0 score:(float)arg1 recipientUniqueID:(id)arg2 ;


@end


#endif