// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC24INTELLIGENCEPLATFORMCORE23NUCLEARFAMILYMODELINPUT_H
#define _TTC24INTELLIGENCEPLATFORMCORE23NUCLEARFAMILYMODELINPUT_H

@class SwiftObject, NSSet;
@protocol MLFeatureProvider;



@interface _TtC24IntelligencePlatformCore23NuclearFamilyModelInput : SwiftObject <MLFeatureProvider>

 {
    ? contactFamilyName;
    ? thirdPartyMsgDayRatio;
    ? thirdPartyMsgTwoWeeks;
    ? firstPartyMsgDayRatio;
    ? firstPartyMsgOutgoingRatio;
    ? firstPartyMsgSixWeeks;
    ? firstPartyMsgTwoWeeks;
    ? callMaxDur;
    ? callOutgoingRatio;
    ? callSixWeeks;
    ? callTotal;
    ? callTotalDur;
    ? callTwelveWeeks;
    ? callTwoWeeks;
    ? callLongRatio;
    ? callBirthday;
}


@property (nonatomic, readonly) NSSet *featureNames;


-(id)featureValueForName:(id)arg0 ;


@end


#endif