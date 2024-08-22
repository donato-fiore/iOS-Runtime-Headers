// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSRATINGSYSTEM_H
#define AMSRATINGSYSTEM_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface AMSRatingSystem : NSObject

@property (readonly, nonatomic) NSArray *contentRatings; // ivar: _contentRatings
@property (readonly, nonatomic) NSString *kind; // ivar: _kind
@property (readonly, nonatomic) NSString *label; // ivar: _label
@property (readonly, nonatomic) NSString *ratingSystemID; // ivar: _ratingSystemID
@property (readonly, nonatomic) NSArray *types; // ivar: _types


+(id)ratingSystemWithDictionary:(id)arg0 ;
-(id)description;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif