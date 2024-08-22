// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLSBUSINESSCACHEENTRY_H
#define CLSBUSINESSCACHEENTRY_H

@class NSManagedObject, NSSet;



@interface CLSBusinessCacheEntry : NSManagedObject

@property (retain, nonatomic) NSSet *businessItems;
@property (nonatomic) CGFloat latitude;
@property (nonatomic) CGFloat longitude;
@property (nonatomic) CGFloat radius;
@property (nonatomic) CGFloat updateTimestamp;


+(id)entityName;


@end


#endif