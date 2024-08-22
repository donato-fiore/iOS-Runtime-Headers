// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPBEACONPAYLOADCACHESEARCHRESULT_H
#define SPBEACONPAYLOADCACHESEARCHRESULT_H

@class NSError, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SPSearchResultMarker.h"

@interface SPBeaconPayloadCacheSearchResult : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSError *error; // ivar: _error
@property (copy, nonatomic) NSArray *fileURLs; // ivar: _fileURLs
@property (retain, nonatomic) SPSearchResultMarker *searchResultMarker; // ivar: _searchResultMarker


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFileURLs:(id)arg0 searchResultMarker:(id)arg1 error:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif