// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLSPUBLICEVENTCATEGORY_H
#define CLSPUBLICEVENTCATEGORY_H

@class NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CLSPublicEventCategory : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *category; // ivar: _category
@property (retain, nonatomic) NSString *localizedName; // ivar: _localizedName
@property (retain, nonatomic) NSArray *localizedSubcategories; // ivar: _localizedSubcategories


+(BOOL)supportsSecureCoding;
+(id)appleEvents;
+(id)artsAndMuseums;
+(id)businessAndTechnology;
+(id)community;
+(id)dance;
+(id)educational;
+(id)familyEvents;
+(id)festivalsAndFairs;
+(id)musicConcerts;
+(id)nightLife;
+(id)sports;
+(id)theater;
+(id)tours;
-(NSUInteger)levelForLocalizedSubcategory:(id)arg0 ;
-(id)description;
-(id)initWithCategory:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif