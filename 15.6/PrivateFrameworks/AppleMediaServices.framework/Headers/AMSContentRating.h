// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSCONTENTRATING_H
#define AMSCONTENTRATING_H

@class NSString, NSURL, NSNumber;

#import <Foundation/Foundation.h>


@interface AMSContentRating : NSObject

@property (readonly, nonatomic) NSString *contentRatingID; // ivar: _contentRatingID
@property (readonly, nonatomic) NSURL *imageURL; // ivar: _imageURL
@property (readonly, nonatomic) NSString *kind; // ivar: _kind
@property (readonly, nonatomic) NSString *label; // ivar: _label
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSString *ratingDescription; // ivar: _ratingDescription
@property (readonly, nonatomic) NSNumber *value; // ivar: _value


+(id)contentRatingWithDictionary:(id)arg0 ;
-(id)description;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif