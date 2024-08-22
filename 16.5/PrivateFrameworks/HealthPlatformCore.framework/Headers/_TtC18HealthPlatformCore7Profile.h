// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC18HEALTHPLATFORMCORE7PROFILE_H
#define _TTC18HEALTHPLATFORMCORE7PROFILE_H

@class NSManagedObject, NSSet, NSData, NSUUID;



@interface _TtC18HealthPlatformCore7Profile : NSManagedObject

@property (nonatomic, copy) NSSet *allPluginData;
@property (nonatomic, copy) NSData *encodedHKProfileIdentifier;
@property (nonatomic, copy) NSSet *feedItems;
@property (nonatomic, copy) NSUUID *uniqueIdentifier;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif