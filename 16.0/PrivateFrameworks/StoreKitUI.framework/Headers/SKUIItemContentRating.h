// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIITEMCONTENTRATING_H
#define SKUIITEMCONTENTRATING_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface SKUIItemContentRating : NSObject

@property (readonly, nonatomic) NSString *contentRank; // ivar: _contentRank
@property (readonly, nonatomic) NSArray *contentRatingAdvisories; // ivar: _contentRatingAdvisories
@property (readonly, nonatomic) NSString *contentRatingName; // ivar: _contentRatingName
@property (readonly, nonatomic) NSString *contentRatingSystemName; // ivar: _contentRatingSystemName


-(id)description;
-(id)initWithContentRatingDictionary:(id)arg0 systemName:(id)arg1 ;


@end


#endif