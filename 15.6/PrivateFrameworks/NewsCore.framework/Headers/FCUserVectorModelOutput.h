// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCUSERVECTORMODELOUTPUT_H
#define FCUSERVECTORMODELOUTPUT_H

@class NSSet, MLMultiArray;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface FCUserVectorModelOutput : NSObject <MLFeatureProvider>



@property (readonly, nonatomic) NSSet *featureNames;
@property (retain, nonatomic) MLMultiArray *user_vector; // ivar: _user_vector


-(id)featureValueForName:(id)arg0 ;
-(id)initWithUser_vector:(id)arg0 ;


@end


#endif