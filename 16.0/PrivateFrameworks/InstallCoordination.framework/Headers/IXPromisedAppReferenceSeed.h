// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IXPROMISEDAPPREFERENCESEED_H
#define IXPROMISEDAPPREFERENCESEED_H

@protocol NSSecureCoding, NSCopying;


#import "IXOwnedDataPromiseSeed.h"
#import "IXApplicationIdentity.h"

@interface IXPromisedAppReferenceSeed : IXOwnedDataPromiseSeed <NSSecureCoding, NSCopying>



@property (retain, nonatomic) IXApplicationIdentity *identity; // ivar: _identity
@property (nonatomic) NSUInteger installationDomain; // ivar: _installationDomain


+(BOOL)supportsSecureCoding;
-(Class)clientPromiseClass;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif