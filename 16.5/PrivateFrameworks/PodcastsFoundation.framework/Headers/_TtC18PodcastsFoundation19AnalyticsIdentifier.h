// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC18PODCASTSFOUNDATION19ANALYTICSIDENTIFIER_H
#define _TTC18PODCASTSFOUNDATION19ANALYTICSIDENTIFIER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _TtC18PodcastsFoundation19AnalyticsIdentifier : NSObject {
    ? store;
    ? clientId;
    ? userId;
}


@property (nonatomic, copy) NSString *clientId;
@property (nonatomic) BOOL userAllowsPersonalization; // ivar: userAllowsPersonalization
@property (nonatomic, copy) NSString *userId;
@property (nonatomic) BOOL userIsManagedAccount; // ivar: userIsManagedAccount
@property (nonatomic) BOOL userUnder13YearsOld; // ivar: userUnder13YearsOld


+(id)kMTResetIdentifierKey;
+(id)sharedInstance;
-(id)init;
-(void)resetIdentifiers;
-(void)resetIfNeeded;
-(void)updateIdentifiers;


@end


#endif