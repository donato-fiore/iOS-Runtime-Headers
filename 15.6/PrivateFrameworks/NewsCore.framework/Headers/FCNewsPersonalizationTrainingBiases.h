// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCNEWSPERSONALIZATIONTRAININGBIASES_H
#define FCNEWSPERSONALIZATIONTRAININGBIASES_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface FCNewsPersonalizationTrainingBiases : NSObject

@property (retain, nonatomic) NSDictionary *biases; // ivar: _biases


+(id)identifiersForEventType:(id)arg0 feedType:(id)arg1 groupType:(id)arg2 ;
-(CGFloat)biasForEventType:(id)arg0 feedType:(id)arg1 groupType:(id)arg2 ;
-(id)initWithBiases:(id)arg0 ;


@end


#endif