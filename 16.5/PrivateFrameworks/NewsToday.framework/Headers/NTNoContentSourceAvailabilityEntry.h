// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTNOCONTENTSOURCEAVAILABILITYENTRY_H
#define NTNOCONTENTSOURCEAVAILABILITYENTRY_H

@class NSString;
@protocol NTSourceAvailabilityEntry;

#import <Foundation/Foundation.h>


@interface NTNoContentSourceAvailabilityEntry : NSObject <NTSourceAvailabilityEntry>



@property (copy, nonatomic) id *availabilityChangedNotificationBlock; // ivar: availabilityChangedNotificationBlock
@property (readonly, nonatomic, getter=isAvailable) BOOL available;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isLikelyAvailable) BOOL likelyAvailable;
@property (readonly) Class superclass;
@property (readonly, nonatomic) Class todayResultsFetchDescriptorClass;


-(id)init;


@end


#endif