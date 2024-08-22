// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCMCLIENTCODESIGNINFO_H
#define MCMCLIENTCODESIGNINFO_H

@class NSData, NSString;
@protocol MCMClientCodeSignInfo, MCMEntitlements;

#import <Foundation/Foundation.h>


@interface MCMClientCodeSignInfo : NSObject <MCMClientCodeSignInfo>



@property (readonly, nonatomic) BOOL cached; // ivar: _cached
@property (readonly, nonatomic) NSData *cdhash; // ivar: _cdhash
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<MCMEntitlements> *entitlements; // ivar: _entitlements
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isPlatformBinary; // ivar: _isPlatformBinary
@property (readonly, nonatomic) BOOL isSignatureValid; // ivar: _isSignatureValid
@property (readonly, nonatomic) BOOL isSigned; // ivar: _isSigned
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToClientCodeSignInfo:(id)arg0 ;
-(id)clientCodeSignInfoByChangingCached:(BOOL)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCDHash:(id)arg0 entitlements:(id)arg1 identifier:(id)arg2 status:(NSUInteger)arg3 ;


@end


#endif