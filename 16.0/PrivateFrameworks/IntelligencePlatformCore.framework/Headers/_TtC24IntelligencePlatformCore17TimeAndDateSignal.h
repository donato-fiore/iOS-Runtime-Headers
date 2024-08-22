// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC24INTELLIGENCEPLATFORMCORE17TIMEANDDATESIGNAL_H
#define _TTC24INTELLIGENCEPLATFORMCORE17TIMEANDDATESIGNAL_H

@class SwiftObject, NSSet;
@protocol MLFeatureProvider;



@interface _TtC24IntelligencePlatformCore17TimeAndDateSignal : SwiftObject <MLFeatureProvider>

 {
    ? dateFetcher;
    ? calendar;
}


@property (nonatomic, readonly) NSSet *featureNames;


-(id)featureValueForName:(id)arg0 ;


@end


#endif