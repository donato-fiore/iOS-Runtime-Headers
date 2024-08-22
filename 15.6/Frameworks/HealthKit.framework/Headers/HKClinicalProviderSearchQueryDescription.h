// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKCLINICALPROVIDERSEARCHQUERYDESCRIPTION_H
#define HKCLINICALPROVIDERSEARCHQUERYDESCRIPTION_H

@class NSNumber, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKClinicalProviderSearchQueryDescription : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSNumber *latitude; // ivar: _latitude
@property (readonly, copy, nonatomic) NSNumber *longitude; // ivar: _longitude
@property (readonly, nonatomic) NSUInteger options; // ivar: _options
@property (readonly, nonatomic) NSInteger pageOffset; // ivar: _pageOffset
@property (readonly, copy, nonatomic) NSString *searchString; // ivar: _searchString


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSearchString:(id)arg0 latitude:(id)arg1 longitude:(id)arg2 pageOffset:(NSInteger)arg3 options:(NSUInteger)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif