// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIMPLERULEEVALUATOR_H
#define SIMPLERULEEVALUATOR_H

@class NSMutableArray, NSString;
@protocol ConfigurableObjectProtocol, AdditionalInfoProtocol;

#import <Foundation/Foundation.h>

#import "SimpleSyndromeHandler.h"

@interface SimpleRuleEvaluator : NSObject <ConfigurableObjectProtocol>

 {
    NSMutableArray *_conditionsToCheck;
    char * _stringToLog;
    NSUInteger _awd_code;
    SimpleSyndromeHandler *_syndromeToCall;
    id<AdditionalInfoProtocol> *_additionalInfoGenerator;
    SEL _additionalInfoSelector;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *signatureName; // ivar: _signatureName
@property (readonly) Class superclass;


+(id)configureClass:(id)arg0 ;
+(id)objectWithName:(id)arg0 ;
-(int)configureInstance:(id)arg0 ;
-(int)read:(id)arg0 returnedValues:(id)arg1 ;
-(void)evaluateSignatureForEvent:(id)arg0 ;


@end


#endif