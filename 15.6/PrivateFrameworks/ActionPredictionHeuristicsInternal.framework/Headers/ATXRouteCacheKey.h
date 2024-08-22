// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXROUTECACHEKEY_H
#define ATXROUTECACHEKEY_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface ATXRouteCacheKey : NSObject <NSCopying>

 {
    NSString *destinationLocation;
    NSString *transportType;
    BOOL localOnlyAfterFirstUpdate;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif