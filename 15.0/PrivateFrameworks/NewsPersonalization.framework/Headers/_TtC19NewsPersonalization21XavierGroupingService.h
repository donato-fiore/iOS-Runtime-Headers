// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC19NEWSPERSONALIZATION21XAVIERGROUPINGSERVICE_H
#define _TTC19NEWSPERSONALIZATION21XAVIERGROUPINGSERVICE_H

@class SwiftObject;
@protocol FCPersonalizedGrouping;



@interface _TtC19NewsPersonalization21XavierGroupingService : SwiftObject <FCPersonalizedGrouping>

 {
    ? cloudContext;
    ? personalizationTreatment;
    ? favoritesPersonalizer;
    ? deviceIsiPad;
    ? paidAccessChecker;
    ? isRunningPPT;
}




-(id)bestOfGroupFromFeedItems:(id)arg0 scoreProfiles:(id)arg1 configurationSet:(NSInteger)arg2 ;
-(id)bestOfGroupFromHeadlines:(id)arg0 configurationSet:(NSInteger)arg1 ;


@end


#endif