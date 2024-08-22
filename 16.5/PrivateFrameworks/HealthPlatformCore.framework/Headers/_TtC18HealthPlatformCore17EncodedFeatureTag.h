// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC18HEALTHPLATFORMCORE17ENCODEDFEATURETAG_H
#define _TTC18HEALTHPLATFORMCORE17ENCODEDFEATURETAG_H

@class NSManagedObject, NSData, NSString;


#import "_TtC18HealthPlatformCore8FeedItem.h"

@interface _TtC18HealthPlatformCore17EncodedFeatureTag : NSManagedObject

@property (nonatomic, copy) NSData *data;
@property (nonatomic, retain) _TtC18HealthPlatformCore8FeedItem *feedItem;
@property (nonatomic, copy) NSString *name;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif