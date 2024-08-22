// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC18HEALTHPLATFORMCORE4FEED_H
#define _TTC18HEALTHPLATFORMCORE4FEED_H

@class NSManagedObject, NSDate, NSString, NSOrderedSet;


#import "_TtC18HealthPlatformCore7Profile.h"

@interface _TtC18HealthPlatformCore4Feed : NSManagedObject

@property (nonatomic, retain) _TtC18HealthPlatformCore7Profile *associatedProfile;
@property (nonatomic, copy) NSDate *dateUpdated;
@property (nonatomic, copy) NSString *kindRawValue;
@property (nonatomic, retain) NSOrderedSet *sections;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif