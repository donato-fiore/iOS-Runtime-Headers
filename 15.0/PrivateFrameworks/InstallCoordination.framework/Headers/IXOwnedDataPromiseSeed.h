// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IXOWNEDDATAPROMISESEED_H
#define IXOWNEDDATAPROMISESEED_H

@class NSURL;
@protocol NSSecureCoding, NSCopying;


#import "IXDataPromiseSeed.h"

@interface IXOwnedDataPromiseSeed : IXDataPromiseSeed <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSURL *stagingBaseDir; // ivar: _stagingBaseDir


+(BOOL)supportsSecureCoding;
-(Class)clientPromiseClass;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif