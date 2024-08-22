// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WLKCONTENTRATING_H
#define WLKCONTENTRATING_H

@class NSString;

#import <Foundation/Foundation.h>


@interface WLKContentRating : NSObject

@property (readonly, copy, nonatomic) NSString *contentRatingSystem; // ivar: _contentRatingSystem
@property (readonly, copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSUInteger ratingValue; // ivar: _ratingValue
@property (readonly, nonatomic) NSUInteger systemType; // ivar: _systemType


-(id)init;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif