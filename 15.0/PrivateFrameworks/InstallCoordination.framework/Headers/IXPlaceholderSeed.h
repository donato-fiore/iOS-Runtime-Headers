// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IXPLACEHOLDERSEED_H
#define IXPLACEHOLDERSEED_H

@class NSString;
@protocol NSSecureCoding, NSCopying;


#import "IXOwnedDataPromiseSeed.h"

@interface IXPlaceholderSeed : IXOwnedDataPromiseSeed <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (copy, nonatomic) NSString *bundleName; // ivar: _bundleName
@property (nonatomic) NSUInteger installType; // ivar: _installType
@property (nonatomic) BOOL isPlugin; // ivar: _isPlugin


+(BOOL)supportsSecureCoding;
-(Class)clientPromiseClass;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif