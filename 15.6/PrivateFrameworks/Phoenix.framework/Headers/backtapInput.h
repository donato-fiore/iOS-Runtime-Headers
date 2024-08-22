// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BACKTAPINPUT_H
#define BACKTAPINPUT_H

@class NSSet, MLMultiArray;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface backtapInput : NSObject <MLFeatureProvider>



@property (readonly, nonatomic) NSSet *featureNames;
@property (retain, nonatomic) MLMultiArray *model_input; // ivar: _model_input


-(id)featureValueForName:(id)arg0 ;
-(id)initWithModel_input:(id)arg0 ;


@end


#endif