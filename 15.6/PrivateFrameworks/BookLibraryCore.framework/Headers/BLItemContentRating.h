// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BLITEMCONTENTRATING_H
#define BLITEMCONTENTRATING_H

@class NSMutableDictionary, NSDictionary, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface BLItemContentRating : NSObject <NSCopying>

 {
    NSMutableDictionary *_dictionary;
}


@property (readonly, nonatomic) NSDictionary *contentRatingDictionary;
@property (nonatomic) NSInteger rank;
@property (copy, nonatomic) NSString *ratingDescription;
@property (copy, nonatomic) NSString *ratingLabel;
@property (nonatomic) NSInteger ratingSystem;


+(NSInteger)ratingSystemFromString:(id)arg0 ;
+(id)stringForRatingSystem:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;
-(id)valueForProperty:(id)arg0 ;
-(void)_setValue:(id)arg0 forProperty:(id)arg1 ;
-(void)_setValueCopy:(id)arg0 forProperty:(id)arg1 ;


@end


#endif