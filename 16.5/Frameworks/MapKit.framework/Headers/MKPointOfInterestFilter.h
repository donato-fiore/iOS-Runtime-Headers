// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKPOINTOFINTERESTFILTER_H
#define MKPOINTOFINTERESTFILTER_H

@class NSSet;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface MKPointOfInterestFilter : NSObject <NSSecureCoding, NSCopying>

 {
    NSSet *_includedCategories;
    NSSet *_excludedCategories;
}




+(BOOL)supportsSecureCoding;
+(id)filterExcludingAllCategories;
+(id)filterIncludingAllCategories;
-(BOOL)_excludesAllCategories;
-(BOOL)_includesAllCategories;
-(BOOL)excludesCategory:(id)arg0 ;
-(BOOL)includesCategory:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPointOfInterestFilter:(id)arg0 ;
-(id)_geoPOICategoryFilter;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initExcludingCategories:(id)arg0 ;
-(id)initIncludingCategories:(id)arg0 ;
-(id)initIncludingCategories:(id)arg0 excludingCategories:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif