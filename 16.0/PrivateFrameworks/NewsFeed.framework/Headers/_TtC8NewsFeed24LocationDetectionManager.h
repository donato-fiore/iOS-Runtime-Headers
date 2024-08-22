// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC8NEWSFEED24LOCATIONDETECTIONMANAGER_H
#define _TTC8NEWSFEED24LOCATIONDETECTIONMANAGER_H

@class CLLocation;
@protocol TSLocationDetectionManagerType;

#import <Foundation/Foundation.h>


@interface _TtC8NewsFeed24LocationDetectionManager : NSObject <TSLocationDetectionManagerType>

 {
    ? locationManager;
    ? onUserInteractedWithLocationAuthorizationTCC;
}


@property (nonatomic, readonly) BOOL authorized;
@property (nonatomic, readonly) BOOL locationServicesEnabled;
@property (nonatomic, readonly) CLLocation *mostFrequentLocation;
@property (nonatomic, retain) id *observableMostFrequentLocation; // ivar: observableMostFrequentLocation


-(id)init;


@end


#endif