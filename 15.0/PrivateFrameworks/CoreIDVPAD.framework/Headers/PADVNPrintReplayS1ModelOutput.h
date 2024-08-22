// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PADVNPRINTREPLAYS1MODELOUTPUT_H
#define PADVNPRINTREPLAYS1MODELOUTPUT_H

@class MLMultiArray, NSSet;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface PADVNPrintReplayS1ModelOutput : NSObject <MLFeatureProvider>



@property (retain, nonatomic) MLMultiArray *confidence; // ivar: _confidence
@property (readonly, nonatomic) NSSet *featureNames;


-(id)featureValueForName:(id)arg0 ;
-(id)initWithConfidence:(id)arg0 ;


@end


#endif