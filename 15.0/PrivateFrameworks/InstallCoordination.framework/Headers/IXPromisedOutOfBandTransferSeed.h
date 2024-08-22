// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IXPROMISEDOUTOFBANDTRANSFERSEED_H
#define IXPROMISEDOUTOFBANDTRANSFERSEED_H

@protocol NSSecureCoding, NSCopying;


#import "IXOpaqueDataPromiseSeed.h"

@interface IXPromisedOutOfBandTransferSeed : IXOpaqueDataPromiseSeed <NSSecureCoding, NSCopying>





+(BOOL)supportsSecureCoding;
-(Class)clientPromiseClass;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif