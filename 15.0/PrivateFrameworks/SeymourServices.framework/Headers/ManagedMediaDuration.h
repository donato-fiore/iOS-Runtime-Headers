// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MANAGEDMEDIADURATION_H
#define MANAGEDMEDIADURATION_H

@class NSManagedObject, NSString;



@interface ManagedMediaDuration : NSManagedObject

@property (nonatomic) CGFloat duration;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) CGFloat lowerBuffer;
@property (nonatomic) CGFloat upperBuffer;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif