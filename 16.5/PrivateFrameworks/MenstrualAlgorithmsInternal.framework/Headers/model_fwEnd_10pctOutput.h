// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MODEL_FWEND_10PCTOUTPUT_H
#define MODEL_FWEND_10PCTOUTPUT_H

@class NSSet, MLMultiArray;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface model_fwEnd_10pctOutput : NSObject <MLFeatureProvider>



@property (readonly, nonatomic) NSSet *featureNames;
@property (retain, nonatomic) MLMultiArray *lstm_1_c_out; // ivar: _lstm_1_c_out
@property (retain, nonatomic) MLMultiArray *lstm_1_h_out; // ivar: _lstm_1_h_out
@property (retain, nonatomic) MLMultiArray *out_; // ivar: _out_


-(id)featureValueForName:(id)arg0 ;
-(id)initWithOut:(id)arg0 lstm_1_h_out:(id)arg1 lstm_1_c_out:(id)arg2 ;


@end


#endif