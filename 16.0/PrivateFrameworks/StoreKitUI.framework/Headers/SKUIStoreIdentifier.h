// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUISTOREIDENTIFIER_H
#define SKUISTOREIDENTIFIER_H

@class NSString, NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SKUIStoreIdentifier : NSObject <NSCopying>



@property (retain, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic) NSNumber *itemIdentifier; // ivar: _itemIdentifier
@property (retain, nonatomic) NSString *podcastFeedURLIdentifier; // ivar: _podcastFeedURLIdentifier


-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)longLongValue;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithLongLong:(NSInteger)arg0 ;
-(id)initWithNumber:(id)arg0 ;
-(id)initWithPodcastFeedURL:(id)arg0 ;
-(id)numberValue;
-(id)stringValue;


@end


#endif