// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IXPROMISEDTRANSFERTOPATHSEED_H
#define IXPROMISEDTRANSFERTOPATHSEED_H

@class NSURL;
@protocol NSSecureCoding, NSCopying;


#import "IXOwnedDataPromiseSeed.h"

@interface IXPromisedTransferToPathSeed : IXOwnedDataPromiseSeed <NSSecureCoding, NSCopying>



@property (nonatomic) BOOL shouldCopy; // ivar: _shouldCopy
@property (retain, nonatomic) NSURL *transferPath; // ivar: _transferPath
@property (nonatomic) BOOL tryDeltaCopy; // ivar: _tryDeltaCopy


+(BOOL)supportsSecureCoding;
-(Class)clientPromiseClass;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif