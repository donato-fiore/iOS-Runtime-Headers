// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC18HEALTHPLATFORMCORE11FEEDSECTION_H
#define _TTC18HEALTHPLATFORMCORE11FEEDSECTION_H

@class NSManagedObject, NSOrderedSet, NSString;


#import "_TtC18HealthPlatformCore4Feed.h"

@interface _TtC18HealthPlatformCore11FeedSection : NSManagedObject

@property (nonatomic, retain) _TtC18HealthPlatformCore4Feed *feed;
@property (nonatomic, retain) NSOrderedSet *feedItems;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) BOOL isCollapsible;
@property (nonatomic) NSInteger sortOrder;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif