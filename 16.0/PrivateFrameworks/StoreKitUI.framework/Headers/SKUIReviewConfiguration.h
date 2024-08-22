// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIREVIEWCONFIGURATION_H
#define SKUIREVIEWCONFIGURATION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SKUIReviewConfiguration : NSObject

@property (readonly, nonatomic) NSString *allVersionsURLString; // ivar: _allVersionsURLString
@property (readonly, nonatomic) NSString *currentVersionURLString; // ivar: _currentVersionURLString
@property (readonly, nonatomic) NSString *pageNumberQueryParameter; // ivar: _pageNumberQueryParameter
@property (readonly, nonatomic) NSString *ratingURLString; // ivar: _ratingURLString


-(id)initWithConfigurationDictionary:(id)arg0 ;


@end


#endif