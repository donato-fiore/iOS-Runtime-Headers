// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKMETRIC_H
#define CKMETRIC_H

@class NSDictionary, NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CKMetric : NSObject <NSCopying, NSSecureCoding>



@property NSUInteger bytesDownloaded; // ivar: _bytesDownloaded
@property NSUInteger bytesUploaded; // ivar: _bytesUploaded
@property (copy) NSDictionary *chunkCountByChunkProfile; // ivar: _chunkCountByChunkProfile
@property NSUInteger connections; // ivar: _connections
@property NSUInteger connectionsCreated; // ivar: _connectionsCreated
@property CGFloat duration; // ivar: _duration
@property CGFloat executing; // ivar: _executing
@property (copy) NSDictionary *fileCountByChunkProfile; // ivar: _fileCountByChunkProfile
@property CGFloat queueing; // ivar: _queueing
@property (copy, nonatomic) NSDate *startDate; // ivar: _startDate
@property (copy) NSDictionary *totalBytesByChunkProfile; // ivar: _totalBytesByChunkProfile


+(BOOL)supportsSecureCoding;
+(id)unionDictionary:(id)arg0 with:(id)arg1 ;
-(id)CKPropertiesDescription;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif