// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTPARSECSOURCEAVAILABILITYENTRY_H
#define NTPARSECSOURCEAVAILABILITYENTRY_H

@class NSString, FCNetworkReachability;
@protocol NTSourceAvailabilityEntry;

#import <Foundation/Foundation.h>


@interface NTParsecSourceAvailabilityEntry : NSObject <NTSourceAvailabilityEntry>



@property (copy, nonatomic) id *availabilityChangedNotificationBlock; // ivar: _availabilityChangedNotificationBlock
@property (readonly, nonatomic, getter=isAvailable) BOOL available;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isLikelyAvailable) BOOL likelyAvailable;
@property (readonly, nonatomic) FCNetworkReachability *networkReachability; // ivar: _networkReachability
@property (readonly) Class superclass;
@property (readonly, nonatomic) Class todayResultsFetchDescriptorClass;


-(id)init;
-(id)initWithNetworkReachability:(id)arg0 ;


@end


#endif