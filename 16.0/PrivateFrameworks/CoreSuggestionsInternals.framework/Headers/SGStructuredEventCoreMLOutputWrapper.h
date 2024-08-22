// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGSTRUCTUREDEVENTCOREMLOUTPUTWRAPPER_H
#define SGSTRUCTUREDEVENTCOREMLOUTPUTWRAPPER_H

@class MLMultiArray, NSSet;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface SGStructuredEventCoreMLOutputWrapper : NSObject <MLFeatureProvider>



@property (retain, nonatomic) MLMultiArray *bi_lstm_0_c_out; // ivar: _bi_lstm_0_c_out
@property (retain, nonatomic) MLMultiArray *bi_lstm_0_c_out_rev; // ivar: _bi_lstm_0_c_out_rev
@property (retain, nonatomic) MLMultiArray *bi_lstm_0_h_out; // ivar: _bi_lstm_0_h_out
@property (retain, nonatomic) MLMultiArray *bi_lstm_0_h_out_rev; // ivar: _bi_lstm_0_h_out_rev
@property (retain, nonatomic) MLMultiArray *core; // ivar: _core
@property (readonly, nonatomic) NSSet *featureNames;
@property (retain, nonatomic) MLMultiArray *location; // ivar: _location
@property (retain, nonatomic) MLMultiArray *time; // ivar: _time
@property (retain, nonatomic) MLMultiArray *title; // ivar: _title


-(id)featureValueForName:(id)arg0 ;
-(id)initWithLocation:(id)arg0 time:(id)arg1 title:(id)arg2 core:(id)arg3 bi_lstm_0_h_out:(id)arg4 bi_lstm_0_c_out:(id)arg5 bi_lstm_0_h_out_rev:(id)arg6 bi_lstm_0_c_out_rev:(id)arg7 ;


@end


#endif