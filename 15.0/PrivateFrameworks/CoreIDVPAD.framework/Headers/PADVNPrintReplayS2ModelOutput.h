// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PADVNPRINTREPLAYS2MODELOUTPUT_H
#define PADVNPRINTREPLAYS2MODELOUTPUT_H

@class NSSet, MLMultiArray;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface PADVNPrintReplayS2ModelOutput : NSObject <MLFeatureProvider>



@property (readonly, nonatomic) NSSet *featureNames;
@property (retain, nonatomic) MLMultiArray *label_1; // ivar: _label_1
@property (retain, nonatomic) MLMultiArray *score_1; // ivar: _score_1


-(id)featureValueForName:(id)arg0 ;
-(id)initWithScore_1:(id)arg0 label_1:(id)arg1 ;


@end


#endif