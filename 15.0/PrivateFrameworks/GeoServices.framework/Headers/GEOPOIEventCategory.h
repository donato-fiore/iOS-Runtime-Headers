// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOPOIEVENTCATEGORY_H
#define GEOPOIEVENTCATEGORY_H

@class NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GEOPOIEventCategory : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *category; // ivar: _category
@property (readonly, nonatomic) NSArray *localizedNames; // ivar: _localizedNames


+(BOOL)supportsSecureCoding;
+(id)poiEventCategoriesForEventCategories:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPOIEventCategory:(id)arg0 ;
-(id)init;
-(id)initWithCategory:(id)arg0 localizedNames:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEventCategory:(id)arg0 ;
-(id)parsePDCategories:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif