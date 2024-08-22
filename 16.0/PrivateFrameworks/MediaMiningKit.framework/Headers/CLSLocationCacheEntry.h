// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLSLOCATIONCACHEENTRY_H
#define CLSLOCATIONCACHEENTRY_H

@class NSManagedObject, NSString, NSSet;



@interface CLSLocationCacheEntry : NSManagedObject

@property (copy, nonatomic) NSString *address;
@property (copy, nonatomic) NSString *addressDictionaryString;
@property (nonatomic) BOOL coarse;
@property (nonatomic) CGFloat latitude;
@property (nonatomic) CGFloat longitude;
@property (nonatomic) NSUInteger muid;
@property (retain, nonatomic) NSSet *placemarks;
@property (copy, nonatomic) NSString *postalAddress;
@property (nonatomic) CGFloat updateTimestamp;


+(id)entityName;


@end


#endif