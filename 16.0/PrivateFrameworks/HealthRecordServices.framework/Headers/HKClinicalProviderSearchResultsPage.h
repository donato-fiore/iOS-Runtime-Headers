// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKCLINICALPROVIDERSEARCHRESULTSPAGE_H
#define HKCLINICALPROVIDERSEARCHRESULTSPAGE_H

@class NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKClinicalProviderSearchResultsPage : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSInteger from; // ivar: _from
@property (readonly, nonatomic) NSInteger nextFrom; // ivar: _nextFrom
@property (readonly, copy, nonatomic) NSArray *searchResults; // ivar: _searchResults
@property (readonly, nonatomic) NSInteger size; // ivar: _size


+(BOOL)supportsSecureCoding;
-(id)copyWithSearchResults:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSearchResults:(id)arg0 from:(NSInteger)arg1 nextFrom:(NSInteger)arg2 size:(NSInteger)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif