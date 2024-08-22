// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MLCONTENTRATING_H
#define MLCONTENTRATING_H

@class NSMutableDictionary, NSString, NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MLContentRating : NSObject <NSCopying>

 {
    NSMutableDictionary *_dictionary;
}


@property (copy, nonatomic) NSString *ratingDescription;
@property (copy, nonatomic) NSString *ratingLabel;
@property (retain, nonatomic) NSNumber *ratingRank;
@property (copy, nonatomic) NSString *ratingSystem;


-(id)copyStringRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithContentRatingDictionary:(id)arg0 ;
-(id)initWithStringRepresentation:(id)arg0 ;
-(void)_setValue:(id)arg0 forKey:(id)arg1 ;
-(void)_setValueCopy:(id)arg0 forKey:(id)arg1 ;


@end


#endif