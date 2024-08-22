// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STEXECUTABLEIDENTITY_H
#define STEXECUTABLEIDENTITY_H

@class BSAuditToken, NSString;
@protocol NSSecureCoding, BSDescriptionProviding, NSCopying;

#import <Foundation/Foundation.h>


@interface STExecutableIdentity : NSObject <NSSecureCoding, BSDescriptionProviding, NSCopying>

 {
    BSAuditToken *_bsAuditToken;
}


@property (readonly, nonatomic) ? auditToken;
@property (readonly, copy, nonatomic) NSString *bundlePath; // ivar: _bundlePath
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *executablePath; // ivar: _executablePath
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithAuditToken:(struct ? )arg0 ;
-(id)initWithAuditToken:(struct ? )arg0 bundlePath:(id)arg1 executablePath:(id)arg2 ;
-(id)initWithBundlePath:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithExecutablePath:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif