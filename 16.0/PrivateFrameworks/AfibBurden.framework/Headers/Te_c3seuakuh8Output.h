// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TE_C3SEUAKUH8OUTPUT_H
#define TE_C3SEUAKUH8OUTPUT_H

@class MLMultiArray, NSSet;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface Te_c3seuakuh8Output : NSObject <MLFeatureProvider>



@property (retain, nonatomic) MLMultiArray *RHYTHM_TYPE_HEAD_FC_1_fully_connected_BiasAdd; // ivar: _RHYTHM_TYPE_HEAD_FC_1_fully_connected_BiasAdd
@property (readonly, nonatomic) NSSet *featureNames;


-(id)featureValueForName:(id)arg0 ;
-(id)initWithRHYTHM_TYPE_HEAD_FC_1_fully_connected_BiasAdd:(id)arg0 ;


@end


#endif