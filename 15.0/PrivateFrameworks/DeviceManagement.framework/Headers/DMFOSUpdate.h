// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DMFOSUPDATE_H
#define DMFOSUPDATE_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DMFOSUpdate : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) BOOL allowsInstallLater; // ivar: _allowsInstallLater
@property (readonly, copy, nonatomic) NSString *build; // ivar: _build
@property (readonly, nonatomic) NSUInteger downloadSize; // ivar: _downloadSize
@property (readonly, copy, nonatomic) NSString *humanReadableName; // ivar: _humanReadableName
@property (readonly, nonatomic) NSUInteger installSize; // ivar: _installSize
@property (readonly, nonatomic) BOOL isCritical; // ivar: _isCritical
@property (readonly, copy, nonatomic) NSString *productKey; // ivar: _productKey
@property (readonly, copy, nonatomic) NSString *productName; // ivar: _productName
@property (readonly, nonatomic) BOOL restartRequired; // ivar: _restartRequired
@property (readonly, copy, nonatomic) NSString *version; // ivar: _version


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProductKey:(id)arg0 humanReadableName:(id)arg1 productName:(id)arg2 version:(id)arg3 build:(id)arg4 downloadSize:(NSUInteger)arg5 installSize:(NSUInteger)arg6 isCritical:(BOOL)arg7 restartRequired:(BOOL)arg8 allowsInstallLater:(BOOL)arg9 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif