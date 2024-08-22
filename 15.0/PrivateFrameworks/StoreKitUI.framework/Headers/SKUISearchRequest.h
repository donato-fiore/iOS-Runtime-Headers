// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUISEARCHREQUEST_H
#define SKUISEARCHREQUEST_H

@class NSURL, NSNumber, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SKUISearchRequest : NSObject <NSCopying>



@property (copy, nonatomic) NSURL *URL; // ivar: _url
@property (copy, nonatomic) NSNumber *searchHintIndex; // ivar: _searchHintIndex
@property (copy, nonatomic) NSString *searchHintOriginalTerm; // ivar: _searchHintOriginalTerm
@property (copy, nonatomic) NSString *term; // ivar: _term


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif