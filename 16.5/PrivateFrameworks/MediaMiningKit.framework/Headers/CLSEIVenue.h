// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLSEIVENUE_H
#define CLSEIVENUE_H

@class NSManagedObject, NSSet, NSString;



@interface CLSEIVenue : NSManagedObject

@property (copy, nonatomic) NSSet *events;
@property (nonatomic) CGFloat latitude;
@property (nonatomic) CGFloat longitude;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) NSInteger uuid;




@end


#endif