// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MANAGEDDIRTYSYNCZONE_H
#define MANAGEDDIRTYSYNCZONE_H

@class NSManagedObject, NSDate, NSString;



@interface ManagedDirtySyncZone : NSManagedObject

@property (nonatomic, copy) NSDate *timestamp;
@property (nonatomic, copy) NSString *zoneName;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif