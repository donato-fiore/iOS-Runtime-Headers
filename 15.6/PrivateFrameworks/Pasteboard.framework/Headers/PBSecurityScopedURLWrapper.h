// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PBSECURITYSCOPEDURLWRAPPER_H
#define PBSECURITYSCOPEDURLWRAPPER_H

@class NSData, FPItem, NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PBSecurityScopedURLWrapper : NSObject <NSSecureCoding>

 {
    NSData *_scope;
}


@property (readonly, nonatomic, getter=isBackedByFileProvider) BOOL backedByFileProvider; // ivar: _backedByFileProvider
@property (readonly, nonatomic) FPItem *fpItem; // ivar: _fpItem
@property (readonly, nonatomic, getter=isReadonly) BOOL readonly; // ivar: _readonly
@property (readonly, nonatomic) NSURL *url; // ivar: _url


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFPItem:(id)arg0 ;
-(id)initWithNSURLWrapper:(id)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(id)initWithURL:(id)arg0 issueExtension:(BOOL)arg1 readonly:(BOOL)arg2 extensionClass:(id)arg3 ;
-(id)initWithURL:(id)arg0 readonly:(BOOL)arg1 ;
-(id)initWithURL:(id)arg0 readonly:(BOOL)arg1 extensionClass:(id)arg2 ;
-(id)initWithURLWithoutIssuingExtension:(id)arg0 ;
-(id)nsURLWrapper;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif