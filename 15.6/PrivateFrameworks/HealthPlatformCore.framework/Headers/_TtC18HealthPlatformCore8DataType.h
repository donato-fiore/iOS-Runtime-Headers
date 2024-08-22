// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC18HEALTHPLATFORMCORE8DATATYPE_H
#define _TTC18HEALTHPLATFORMCORE8DATATYPE_H

@class NSManagedObject, NSSet;



@interface _TtC18HealthPlatformCore8DataType : NSManagedObject

@property (nonatomic) NSInteger codeRaw;
@property (nonatomic, copy) NSSet *feedItems;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif