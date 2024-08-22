// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MADVIVISUALSEARCHRESULTITEM_H
#define MADVIVISUALSEARCHRESULTITEM_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MADVIVisualSearchResultItem : NSObject <NSSecureCoding>



@property (readonly, nonatomic) CGRect normalizedBoundingBox; // ivar: _normalizedBoundingBox
@property (readonly, nonatomic) NSArray *regionAttributes; // ivar: _regionAttributes
@property (readonly, nonatomic) NSArray *searchSections; // ivar: _searchSections


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNormalizedBoundingBox:(struct CGRect )arg0 regionAttributes:(id)arg1 andSearchSections:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif