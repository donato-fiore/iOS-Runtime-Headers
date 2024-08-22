// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLSBUSINESSITEM_H
#define CLSBUSINESSITEM_H

@class NSArray, NSString, CLCircularRegion;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CLSBusinessItem : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSArray *businessCategories; // ivar: _businessCategories
@property (nonatomic) BOOL cached; // ivar: _cached
@property (copy, nonatomic) NSArray *categories; // ivar: _categories
@property (copy, nonatomic) NSString *geoServiceProvider; // ivar: _geoServiceProvider
@property (readonly, nonatomic) BOOL isEnriched;
@property (copy, nonatomic) NSString *isoCountryCode; // ivar: _isoCountryCode
@property (nonatomic) NSUInteger muid; // ivar: _muid
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) CLCircularRegion *region; // ivar: _region
@property (nonatomic) NSInteger venueCapacity; // ivar: _venueCapacity


+(BOOL)supportsSecureCoding;
+(CGFloat)_defaultRadiusForCategories:(id)arg0 ;
+(id)_businessCategoriesFromGeoMapItems:(id)arg0 ;
+(id)_regionFromMapItem:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initFromMapItem:(id)arg0 isoCountryCode:(id)arg1 categoryOnly:(BOOL)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 region:(id)arg1 categories:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif