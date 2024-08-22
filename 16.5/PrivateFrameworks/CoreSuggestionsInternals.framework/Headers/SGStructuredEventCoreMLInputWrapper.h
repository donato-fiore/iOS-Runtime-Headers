// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGSTRUCTUREDEVENTCOREMLINPUTWRAPPER_H
#define SGSTRUCTUREDEVENTCOREMLINPUTWRAPPER_H

@class MLMultiArray, NSSet;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface SGStructuredEventCoreMLInputWrapper : NSObject <MLFeatureProvider>



@property (retain, nonatomic) MLMultiArray *D; // ivar: _D
@property (retain, nonatomic) MLMultiArray *I; // ivar: _I
@property (retain, nonatomic) MLMultiArray *L; // ivar: _L
@property (retain, nonatomic) MLMultiArray *N; // ivar: _N
@property (retain, nonatomic) MLMultiArray *W; // ivar: _W
@property (retain, nonatomic) MLMultiArray *bi_lstm_0_c_in; // ivar: _bi_lstm_0_c_in
@property (retain, nonatomic) MLMultiArray *bi_lstm_0_c_in_rev; // ivar: _bi_lstm_0_c_in_rev
@property (retain, nonatomic) MLMultiArray *bi_lstm_0_h_in; // ivar: _bi_lstm_0_h_in
@property (retain, nonatomic) MLMultiArray *bi_lstm_0_h_in_rev; // ivar: _bi_lstm_0_h_in_rev
@property (readonly, nonatomic) NSSet *featureNames;


-(id)featureValueForName:(id)arg0 ;
-(id)initWithL:(id)arg0 D:(id)arg1 I:(id)arg2 N:(id)arg3 W:(id)arg4 ;
-(id)initWithL:(id)arg0 D:(id)arg1 I:(id)arg2 N:(id)arg3 W:(id)arg4 bi_lstm_0_h_in:(id)arg5 bi_lstm_0_c_in:(id)arg6 bi_lstm_0_h_in_rev:(id)arg7 bi_lstm_0_c_in_rev:(id)arg8 ;


@end


#endif