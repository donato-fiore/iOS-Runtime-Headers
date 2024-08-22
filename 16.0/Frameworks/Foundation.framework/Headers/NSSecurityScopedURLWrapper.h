// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSSECURITYSCOPEDURLWRAPPER_H
#define NSSECURITYSCOPEDURLWRAPPER_H

@class NSData, NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "NSString.h"

@interface NSSecurityScopedURLWrapper : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSData *_scope; // ivar: _scope
@property (readonly, nonatomic, getter=isBackedByFileProvider) BOOL backedByFileProvider; // ivar: _backedByFileProvider
@property (readonly, nonatomic) NSString *domainIdentifier; // ivar: _domainIdentifier
@property (readonly, nonatomic) NSString *itemIdentifier; // ivar: _itemIdentifier
@property (readonly, nonatomic) NSString *providerIdentifier; // ivar: _providerIdentifier
@property (readonly, nonatomic, getter=isReadonly) BOOL readonly; // ivar: _readonly
@property (readonly, copy, nonatomic) NSURL *url; // ivar: _url


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProviderIdentifier:(id)arg0 domainIdentifier:(id)arg1 itemIdentifier:(id)arg2 ;
-(id)initWithURL:(id)arg0 ;
-(id)initWithURL:(id)arg0 readonly:(BOOL)arg1 ;
-(id)initWithURL:(id)arg0 readonly:(BOOL)arg1 extensionClass:(id)arg2 ;
-(id)initWithURL:(id)arg0 readonly:(BOOL)arg1 scope:(id)arg2 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif