// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC7NEWSUI224LOCATIONDETECTIONMANAGER_H
#define _TTC7NEWSUI224LOCATIONDETECTIONMANAGER_H

@class CLLocation;
@protocol TSLocationDetectionManagerType;

#import <Foundation/Foundation.h>


@interface _TtC7NewsUI224LocationDetectionManager : NSObject <TSLocationDetectionManagerType>

 {
    ? locationManager;
}


@property (nonatomic, readonly) BOOL authorized;
@property (nonatomic, readonly) BOOL locationServicesEnabled;
@property (nonatomic, readonly) CLLocation *mostFrequentLocation;
@property (nonatomic, retain) id *observableMostFrequentLocation; // ivar: observableMostFrequentLocation


-(id)init;


@end


#endif