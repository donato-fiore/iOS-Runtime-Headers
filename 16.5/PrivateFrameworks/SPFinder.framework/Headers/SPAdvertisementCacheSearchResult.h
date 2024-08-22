// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPADVERTISEMENTCACHESEARCHRESULT_H
#define SPADVERTISEMENTCACHESEARCHRESULT_H

@class NSArray, NSError;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SPSearchResultMarker.h"

@interface SPAdvertisementCacheSearchResult : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSArray *beaconAdvertisements; // ivar: _beaconAdvertisements
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) SPSearchResultMarker *searchResultMarker; // ivar: _searchResultMarker


+(BOOL)supportsSecureCoding;
-(id)initWithBeaconAdvertisements:(id)arg0 searchResultMarker:(id)arg1 error:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif