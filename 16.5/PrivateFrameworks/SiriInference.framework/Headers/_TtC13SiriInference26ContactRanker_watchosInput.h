// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC13SIRIINFERENCE26CONTACTRANKER_WATCHOSINPUT_H
#define _TTC13SIRIINFERENCE26CONTACTRANKER_WATCHOSINPUT_H

@class SwiftObject, NSSet;
@protocol MLFeatureProvider;



@interface _TtC13SiriInference26ContactRanker_watchosInput : SwiftObject <MLFeatureProvider>

 {
    ? inputs;
}


@property (nonatomic, readonly) NSSet *featureNames;


-(id)featureValueForName:(id)arg0 ;


@end


#endif