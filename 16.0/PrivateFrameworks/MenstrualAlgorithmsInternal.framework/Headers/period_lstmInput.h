// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PERIOD_LSTMINPUT_H
#define PERIOD_LSTMINPUT_H

@class NSSet, MLMultiArray;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface period_lstmInput : NSObject <MLFeatureProvider>



@property (readonly, nonatomic) NSSet *featureNames;
@property (retain, nonatomic) MLMultiArray *in_; // ivar: _in_
@property (retain, nonatomic) MLMultiArray *lstm_1_c_in; // ivar: _lstm_1_c_in
@property (retain, nonatomic) MLMultiArray *lstm_1_h_in; // ivar: _lstm_1_h_in


-(id)featureValueForName:(id)arg0 ;
-(id)initWithIn:(id)arg0 ;
-(id)initWithIn:(id)arg0 lstm_1_h_in:(id)arg1 lstm_1_c_in:(id)arg2 ;


@end


#endif