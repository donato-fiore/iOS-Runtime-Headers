// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IXOPAQUEDATAPROMISESEED_H
#define IXOPAQUEDATAPROMISESEED_H

@protocol NSSecureCoding, NSCopying;


#import "IXDataPromiseSeed.h"

@interface IXOpaqueDataPromiseSeed : IXDataPromiseSeed <NSSecureCoding, NSCopying>





+(BOOL)supportsSecureCoding;
-(Class)clientPromiseClass;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif