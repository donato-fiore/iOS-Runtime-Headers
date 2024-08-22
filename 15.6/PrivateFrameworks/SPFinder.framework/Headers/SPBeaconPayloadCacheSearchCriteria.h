// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SPBEACONPAYLOADCACHESEARCHCRITERIA_H
#define SPBEACONPAYLOADCACHESEARCHCRITERIA_H

@class NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SPSearchResultMarker.h"

@interface SPBeaconPayloadCacheSearchCriteria : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSNumber *fetchLimit; // ivar: _fetchLimit
@property (retain, nonatomic) SPSearchResultMarker *searchResultMarker; // ivar: _searchResultMarker


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif