// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


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
@property (nonatomic, copy) NSString *userId;


+(id)sharedInstance;
-(id)init;
-(void)resetIdentifiers;
-(void)resetIfNeeded;
-(void)updateIdentifiers;


@end


#endif