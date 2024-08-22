// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SHARABLEMODELREFERENCE_H
#define SHARABLEMODELREFERENCE_H

@class NSManagedObject, NSString;


#import "_TtC18HealthPlatformCore8FeedItem.h"

@interface SharableModelReference : NSManagedObject

@property (nonatomic, retain) _TtC18HealthPlatformCore8FeedItem *feedItem;
@property (nonatomic, copy) NSString *identifier;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif