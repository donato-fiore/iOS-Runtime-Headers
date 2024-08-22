// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKMETRIC_H
#define CKMETRIC_H

@class NSDictionary, NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CKMetric : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSUInteger bytesDownloaded; // ivar: _bytesDownloaded
@property (readonly, nonatomic) NSUInteger bytesFulfilledLocally; // ivar: _bytesFulfilledLocally
@property (readonly, nonatomic) NSUInteger bytesResumed; // ivar: _bytesResumed
@property (readonly, nonatomic) NSUInteger bytesUploaded; // ivar: _bytesUploaded
@property (readonly, copy, nonatomic) NSDictionary *chunkCountByChunkProfile; // ivar: _chunkCountByChunkProfile
@property (readonly, nonatomic) NSUInteger connections; // ivar: _connections
@property (readonly, nonatomic) NSUInteger connectionsCreated; // ivar: _connectionsCreated
@property (readonly, nonatomic) CGFloat duration; // ivar: _duration
@property (readonly, nonatomic) CGFloat executing; // ivar: _executing
@property (readonly, copy, nonatomic) NSDictionary *fileCountByChunkProfile; // ivar: _fileCountByChunkProfile
@property (nonatomic) NSUInteger perRecordKeysRolled; // ivar: _perRecordKeysRolled
@property (readonly, nonatomic) CGFloat queueing; // ivar: _queueing
@property (nonatomic) NSUInteger shareKeysRolled; // ivar: _shareKeysRolled
@property (readonly, copy, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly, copy, nonatomic) NSDictionary *totalBytesByChunkProfile; // ivar: _totalBytesByChunkProfile
@property (nonatomic) BOOL walrusEnabled; // ivar: _walrusEnabled
@property (nonatomic) NSUInteger zoneKeysRolled; // ivar: _zoneKeysRolled
@property (nonatomic) NSUInteger zoneishKeysRolled; // ivar: _zoneishKeysRolled


+(BOOL)supportsSecureCoding;
-(id)CKPropertiesDescription;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStartDate:(id)arg0 duration:(CGFloat)arg1 queueing:(CGFloat)arg2 executing:(CGFloat)arg3 bytesUploaded:(NSUInteger)arg4 bytesDownloaded:(NSUInteger)arg5 connections:(NSUInteger)arg6 connectionsCreated:(NSUInteger)arg7 bytesFulfilledLocally:(NSUInteger)arg8 bytesResumed:(NSUInteger)arg9 totalBytesByChunkProfile:(id)arg10 chunkCountByChunkProfile:(id)arg11 fileCountByChunkProfile:(id)arg12 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif