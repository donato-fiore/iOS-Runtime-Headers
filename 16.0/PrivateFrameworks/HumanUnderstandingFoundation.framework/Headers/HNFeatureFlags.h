// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HNFEATUREFLAGS_H
#define HNFEATUREFLAGS_H


#import <Foundation/Foundation.h>


@interface HNFeatureFlags : NSObject



+(BOOL)isContextualUnderstandingEnabled;
+(BOOL)isContextualUnderstandingNotificationsEnabled;
+(BOOL)isHumanUnderstandingDataCollectionEnabled;
+(BOOL)isHumanUnderstandingEvidenceEnabled;
+(BOOL)isPersonalUnderstandingEnabled;
-(id)init;


@end


#endif