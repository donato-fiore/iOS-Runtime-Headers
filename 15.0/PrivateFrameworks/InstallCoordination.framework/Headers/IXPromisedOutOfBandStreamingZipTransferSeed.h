// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IXPROMISEDOUTOFBANDSTREAMINGZIPTRANSFERSEED_H
#define IXPROMISEDOUTOFBANDSTREAMINGZIPTRANSFERSEED_H

@class NSURL, NSDictionary;
@protocol NSSecureCoding, NSCopying;


#import "IXOpaqueDataPromiseSeed.h"

@interface IXPromisedOutOfBandStreamingZipTransferSeed : IXOpaqueDataPromiseSeed <NSSecureCoding, NSCopying>



@property (nonatomic) NSUInteger archiveBytesConsumed; // ivar: _archiveBytesConsumed
@property (nonatomic) NSUInteger archiveSizeBytes; // ivar: _archiveSizeBytes
@property (retain, nonatomic) NSURL *extractionPath; // ivar: _extractionPath
@property (copy, nonatomic) NSDictionary *szOptions; // ivar: _szOptions


+(BOOL)supportsSecureCoding;
-(Class)clientPromiseClass;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif