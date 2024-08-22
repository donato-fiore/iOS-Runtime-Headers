// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SNSOUNDPRINTAEMBEDDINGMODELOUTPUT_H
#define SNSOUNDPRINTAEMBEDDINGMODELOUTPUT_H

@class MLMultiArray, NSSet;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface SNSoundPrintAEmbeddingModelOutput : NSObject <MLFeatureProvider>



@property (retain, nonatomic) MLMultiArray *_637; // ivar: __637
@property (readonly, nonatomic) NSSet *featureNames;


-(id)featureValueForName:(id)arg0 ;
-(id)initWith_637:(id)arg0 ;


@end


#endif