// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKEXTENSION_H
#define PKEXTENSION_H

@class NSString, NSExtension;

#import <Foundation/Foundation.h>

#import "PKExtensionProvider.h"

@interface PKExtension : NSObject

@property (retain, nonatomic) NSString *containingAppBundleIdentifier; // ivar: _containingAppBundleIdentifier
@property (retain, nonatomic) NSString *containingApplicationIdentifier; // ivar: _containingApplicationIdentifier
@property (retain, nonatomic) NSExtension *extension; // ivar: _extension
@property (readonly, nonatomic) NSString *extensionPointIdentifier;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (weak, nonatomic) PKExtensionProvider *provider; // ivar: _provider
@property (readonly, nonatomic) NSInteger type;


-(id)description;
-(id)initWithIdentifier:(id)arg0 extension:(id)arg1 provider:(id)arg2 ;
-(void)beginExtensionRequestWithCompletion:(id)arg0 ;
-(void)beginExtensionRequestWithOptions:(NSUInteger)arg0 completion:(id)arg1 ;
// -(void)beginLocalExtensionServiceWithUserInteraction:(BOOL)arg0 completion:(id)arg1 timeout:(unk)arg2 timeoutHandler:(NSUInteger)arg3  ;
-(void)completeLocalExtensionServiceWithCompletion:(id)arg0 ;
-(void)performTestExtensionServiceRequestWithCompletion:(id)arg0 ;


@end


#endif