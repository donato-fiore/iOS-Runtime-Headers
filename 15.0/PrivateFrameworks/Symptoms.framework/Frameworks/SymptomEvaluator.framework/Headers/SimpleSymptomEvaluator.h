// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIMPLESYMPTOMEVALUATOR_H
#define SIMPLESYMPTOMEVALUATOR_H

@class NSString, NSMutableArray;
@protocol ConfigurableObjectProtocol;

#import <Foundation/Foundation.h>


@interface SimpleSymptomEvaluator : NSObject <ConfigurableObjectProtocol>

 {
    id<SymptomAdditionalProtocol>" symptomAdditionalHandlers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *symptomKey; // ivar: symptomKey
@property (nonatomic) unsigned int symptomMaxRetainTime; // ivar: symptomMaxRetainTime
@property (retain, nonatomic) NSString *symptomName; // ivar: symptomName
@property (retain, nonatomic) NSMutableArray *symptomRules; // ivar: symptomRules
@property (nonatomic) unsigned int symptomSaveAdditionalId; // ivar: symptomSaveAdditionalId
@property (nonatomic) unsigned int symptomSaveFlags; // ivar: symptomSaveFlags


+(id)_defaultEvaluator;
+(id)configureClass:(id)arg0 ;
+(id)objectWithName:(id)arg0 ;
+(void)initialize;
+(void)postIncomingEvent:(id)arg0 ;
-(id)initWithName:(id)arg0 ;
-(int)configureInstance:(id)arg0 ;
-(int)read:(id)arg0 returnedValues:(id)arg1 ;
-(void)evaluateIncomingEvent:(id)arg0 ;


@end


#endif