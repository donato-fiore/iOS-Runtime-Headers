// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VIREGIONOFINTERESTRESULT_H
#define VIREGIONOFINTERESTRESULT_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface VIRegionOfInterestResult : NSObject <NSCopying>



@property (readonly, nonatomic) CGRect normalizedBoundingBox; // ivar: _normalizedBoundingBox
@property (readonly, nonatomic) NSArray *resultItems; // ivar: _resultItems
@property (readonly, nonatomic) NSArray *searchSections; // ivar: _searchSections


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithNormalizedBoundingBox:(struct CGRect )arg0 resultItems:(id)arg1 searchSections:(id)arg2 ;


@end


#endif