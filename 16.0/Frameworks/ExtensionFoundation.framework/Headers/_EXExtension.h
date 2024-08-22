// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _EXEXTENSION_H
#define _EXEXTENSION_H

@class NSString;
@protocol _EXExtensionConfigurationProviding;

#import <Foundation/Foundation.h>

#import "_EXExtensionIdentity.h"

@interface _EXExtension : NSObject

@property (readonly) NSString *bundleIdentifier;
@property (readonly) NSObject<_EXExtensionConfigurationProviding> *configuration;
@property (weak, nonatomic) id *delegate; // ivar: _delegate
@property BOOL hasSwiftEntryPoint; // ivar: _hasSwiftEntryPoint
@property (readonly) ? hostAuditToken;
@property (retain, nonatomic) _EXExtensionIdentity *internalRep; // ivar: _internalRep
@property (retain, nonatomic) id *strongDelegate; // ivar: _strongDelegate


-(BOOL)loadDelegateWithClass:(Class)arg0 ;
-(BOOL)shouldAcceptConnection:(id)arg0 ;
-(void)didFinishLaunching;
-(void)prepareForSceneConnectionWithConfiguration:(id)arg0 ;
-(void)willFinishLaunching;


@end


#endif