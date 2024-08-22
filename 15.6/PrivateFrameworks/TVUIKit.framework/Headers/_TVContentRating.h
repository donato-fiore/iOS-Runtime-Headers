// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TVCONTENTRATING_H
#define _TVCONTENTRATING_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _TVContentRating : NSObject

@property (readonly, nonatomic, getter=isExplicitContent) BOOL explicitContent;
@property (readonly, nonatomic) NSUInteger rank; // ivar: _rank
@property (readonly, copy, nonatomic) NSString *ratingDescription; // ivar: _ratingDescription
@property (readonly, copy, nonatomic) NSString *ratingLabel; // ivar: _ratingLabel
@property (readonly, nonatomic) NSInteger ratingSystem; // ivar: _ratingSystem
@property (readonly, nonatomic) NSInteger ratingSystemKind;
@property (readonly, copy, nonatomic) NSString *ratingSystemString;
@property (readonly, copy, nonatomic) NSString *stringRepresentation;


+(id)new;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithRatingSystem:(NSInteger)arg0 explicitContent:(BOOL)arg1 ;
-(id)initWithRatingSystem:(NSInteger)arg0 ratingLabel:(id)arg1 rank:(NSUInteger)arg2 ratingDescription:(id)arg3 ;
-(id)initWithRatingSystemString:(id)arg0 ratingLabel:(id)arg1 rank:(NSUInteger)arg2 ratingDescription:(id)arg3 ;
-(id)initWithStringRepresentation:(id)arg0 ;


@end


#endif