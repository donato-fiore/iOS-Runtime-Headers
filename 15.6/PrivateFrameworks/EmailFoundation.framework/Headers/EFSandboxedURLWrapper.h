// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EFSANDBOXEDURLWRAPPER_H
#define EFSANDBOXEDURLWRAPPER_H

@class NSString, NSURL;
@protocol EFLoggable, EFPubliclyDescribable, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "EFDeallocInvocationToken.h"

@interface EFSandboxedURLWrapper : NSObject <EFLoggable, EFPubliclyDescribable, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) EFDeallocInvocationToken *invocable; // ivar: _invocable
@property (readonly, getter=isReadOnly) BOOL readOnly; // ivar: _readOnly
@property (readonly, nonatomic) NSString *sandboxToken; // ivar: _sandboxToken
@property (readonly) Class superclass;
@property (readonly) NSURL *url; // ivar: _url


+(BOOL)supportsSecureCoding;
+(id)log;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFileURL:(id)arg0 readOnly:(BOOL)arg1 ;
-(void)addInvalidationHandler:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif