// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IXPROMISEDSTREAMINGZIPTRANSFERSEED_H
#define IXPROMISEDSTREAMINGZIPTRANSFERSEED_H

@class NSString, NSDictionary;
@protocol NSSecureCoding, NSCopying;


#import "IXOwnedDataPromiseSeed.h"

@interface IXPromisedStreamingZipTransferSeed : IXOwnedDataPromiseSeed <NSSecureCoding, NSCopying>



@property (nonatomic) NSUInteger archiveBytesConsumed; // ivar: _archiveBytesConsumed
@property (nonatomic) NSUInteger archiveSizeBytes; // ivar: _archiveSizeBytes
@property (copy, nonatomic) NSString *sandboxExtensionToken; // ivar: _sandboxExtensionToken
@property (copy, nonatomic) NSDictionary *szOptions; // ivar: _szOptions


+(BOOL)supportsSecureCoding;
-(Class)clientPromiseClass;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif