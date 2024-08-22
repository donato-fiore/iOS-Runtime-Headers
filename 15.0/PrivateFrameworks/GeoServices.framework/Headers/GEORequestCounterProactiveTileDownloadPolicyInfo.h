// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOREQUESTCOUNTERPROACTIVETILEDOWNLOADPOLICYINFO_H
#define GEOREQUESTCOUNTERPROACTIVETILEDOWNLOADPOLICYINFO_H

@class NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GEORequestCounterProactiveTileDownloadPolicyInfo : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSUInteger bytesDownloaded; // ivar: _bytesDownloaded
@property (readonly, nonatomic) NSDate *endTimestamp; // ivar: _endTimestamp
@property (readonly, nonatomic) NSUInteger failureCount; // ivar: _failureCount
@property (readonly, nonatomic) unsigned char policy; // ivar: _policy
@property (readonly, nonatomic) NSDate *startTimestamp; // ivar: _startTimestamp
@property (readonly, nonatomic) NSUInteger successCount; // ivar: _successCount
@property (readonly, nonatomic) NSUInteger tilesConsidered; // ivar: _tilesConsidered


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPolicy:(unsigned char)arg0 startTimestamp:(id)arg1 endTimestamp:(id)arg2 tilesConsidered:(NSUInteger)arg3 successCount:(NSUInteger)arg4 failureCount:(NSUInteger)arg5 bytesDownloaded:(NSUInteger)arg6 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif