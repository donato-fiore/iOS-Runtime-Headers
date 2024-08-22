// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSKEYCHAINFETCHREQUEST_H
#define VSKEYCHAINFETCHREQUEST_H

@class NSPredicate, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "VSOptional.h"

@interface VSKeychainFetchRequest : NSObject <NSCopying>



@property (nonatomic) NSUInteger fetchLimit; // ivar: _fetchLimit
@property (nonatomic) BOOL includesDataValues; // ivar: _includesDataValues
@property (retain, nonatomic) VSOptional *itemKind; // ivar: _itemKind
@property (copy, nonatomic) NSPredicate *predicate; // ivar: _predicate
@property (copy, nonatomic) NSArray *sortDescriptors; // ivar: _sortDescriptors


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif