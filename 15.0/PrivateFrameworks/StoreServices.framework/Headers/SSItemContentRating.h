// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSITEMCONTENTRATING_H
#define SSITEMCONTENTRATING_H

@class NSMutableDictionary, NSDictionary, NSString;
@protocol SSXPCCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "SSItemArtworkImage.h"

@interface SSItemContentRating : NSObject <SSXPCCoding, NSCopying>

 {
    NSMutableDictionary *_dictionary;
}


@property (readonly, nonatomic) NSDictionary *contentRatingDictionary;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isExplicitContent) BOOL explicitContent;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger rank;
@property (copy, nonatomic) NSString *ratingDescription;
@property (copy, nonatomic) NSString *ratingLabel;
@property (nonatomic) NSInteger ratingSystem;
@property (readonly, nonatomic) SSItemArtworkImage *ratingSystemLogo;
@property (readonly, nonatomic, getter=isRestricted) BOOL restricted;
@property (nonatomic) BOOL shouldHideWhenRestricted;
@property (readonly) Class superclass;


+(NSInteger)ratingSystemFromString:(id)arg0 ;
+(id)stringForRatingSystem:(NSInteger)arg0 ;
-(BOOL)_isRatingSystemForApps:(NSInteger)arg0 ;
-(BOOL)_isRatingSystemForMovies:(NSInteger)arg0 ;
-(BOOL)_isRatingSystemForMusic:(NSInteger)arg0 ;
-(BOOL)_isRatingSystemForTV:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyXPCEncoding;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithXPCEncoding:(id)arg0 ;
-(id)valueForProperty:(id)arg0 ;
-(void)_setValue:(id)arg0 forProperty:(id)arg1 ;
-(void)_setValueCopy:(id)arg0 forProperty:(id)arg1 ;
-(void)dealloc;


@end


#endif