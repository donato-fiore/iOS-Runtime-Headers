// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC24INTELLIGENCEPLATFORMCORE29DNHU_RERANKER_FJ8SZZW2RBINPUT_H
#define _TTC24INTELLIGENCEPLATFORMCORE29DNHU_RERANKER_FJ8SZZW2RBINPUT_H

@class SwiftObject, NSSet;
@protocol MLFeatureProvider;



@interface _TtC24IntelligencePlatformCore29dnhu_reranker_fj8szzw2rbInput : SwiftObject <MLFeatureProvider>

 {
    ? candidates;
}


@property (nonatomic, readonly) NSSet *featureNames;


-(id)featureValueForName:(id)arg0 ;


@end


#endif