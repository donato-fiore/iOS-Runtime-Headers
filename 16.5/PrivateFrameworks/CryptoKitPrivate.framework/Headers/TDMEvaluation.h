// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TDMEVALUATION_H
#define TDMEVALUATION_H

@class NSData;

#import <Foundation/Foundation.h>


@interface TDMEvaluation : NSObject

@property (readonly, retain, nonatomic) NSData *evaluatedElement; // ivar: _evaluatedElement
@property (readonly, retain, nonatomic) NSData *proof; // ivar: _proof


-(id)initWithEvaluatedElement:(id)arg0 proof:(id)arg1 ;


@end


#endif