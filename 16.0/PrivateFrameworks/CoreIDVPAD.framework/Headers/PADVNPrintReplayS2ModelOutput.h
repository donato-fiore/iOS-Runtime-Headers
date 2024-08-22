// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PADVNPRINTREPLAYS2MODELOUTPUT_H
#define PADVNPRINTREPLAYS2MODELOUTPUT_H

@class MLMultiArray, NSSet;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface PADVNPrintReplayS2ModelOutput : NSObject <MLFeatureProvider>



@property (retain, nonatomic) MLMultiArray *embedding0_1; // ivar: _embedding0_1
@property (readonly, nonatomic) NSSet *featureNames;
@property (retain, nonatomic) MLMultiArray *score0_1; // ivar: _score0_1


-(id)featureValueForName:(id)arg0 ;
-(id)initWithScore0_1:(id)arg0 embedding0_1:(id)arg1 ;


@end


#endif