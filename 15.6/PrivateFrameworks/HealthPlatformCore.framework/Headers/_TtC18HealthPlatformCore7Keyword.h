// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC18HEALTHPLATFORMCORE7KEYWORD_H
#define _TTC18HEALTHPLATFORMCORE7KEYWORD_H

@class NSManagedObject, NSSet, NSString;



@interface _TtC18HealthPlatformCore7Keyword : NSManagedObject

@property (nonatomic, copy) NSSet *feedItems;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) NSInteger sortOrder;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif