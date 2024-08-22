// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUPAYWALLEVENTDATA_H
#define NUPAYWALLEVENTDATA_H


#import <Foundation/Foundation.h>


@interface NUPaywallEventData : NSObject {
    ? viewData;
    ? articleData;
    ? channel;
    ? feedData;
    ? groupData;
    ? referral;
    ? qToken;
}




-(id)init;
-(id)initWithPaywallViewData:(id)arg0 headline:(id)arg1 channel:(id)arg2 feed:(id)arg3 paywallGroupData:(id)arg4 referral:(id)arg5 qToken:(id)arg6 ;


@end


#endif