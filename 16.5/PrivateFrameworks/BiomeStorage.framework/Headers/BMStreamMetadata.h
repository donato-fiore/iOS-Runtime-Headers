// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMSTREAMMETADATA_H
#define BMSTREAMMETADATA_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "BMPruningPolicy.h"

@interface BMStreamMetadata : NSObject <NSSecureCoding>



@property (readonly, nonatomic) Class eventDataClass; // ivar: _eventDataClass
@property (readonly, nonatomic) BOOL isRemote;
@property (readonly, nonatomic) BMPruningPolicy *pruningPolicy; // ivar: _pruningPolicy
@property (copy, nonatomic) NSString *remoteStreamName; // ivar: _remoteStreamName
@property (readonly, nonatomic) NSString *streamId; // ivar: _streamId


+(BOOL)supportsSecureCoding;
-(BOOL)checkAndReportDecodingFailureIfNeededForid:(id)arg0 key:(id)arg1 coder:(id)arg2 errorDomain:(id)arg3 errorCode:(NSInteger)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualStreamMetadata:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStreamId:(id)arg0 eventType:(Class)arg1 remoteStreamName:(id)arg2 pruningPolicy:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif