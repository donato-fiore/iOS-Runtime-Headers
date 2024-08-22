// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SPADVERTISEMENTCACHESEARCHCRITERIA_H
#define SPADVERTISEMENTCACHESEARCHCRITERIA_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SPSearchResultMarker.h"

@interface SPAdvertisementCacheSearchCriteria : NSObject <NSSecureCoding>



@property (retain, nonatomic) SPSearchResultMarker *searchResultMarker; // ivar: _searchResultMarker


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif