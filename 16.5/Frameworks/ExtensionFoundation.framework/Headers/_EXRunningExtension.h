// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _EXRUNNINGEXTENSION_H
#define _EXRUNNINGEXTENSION_H

@class NSString;
@protocol NSXPCListenerDelegate, _EXExtensionConfigurationProviding;

#import <Foundation/Foundation.h>

#import "_EXExtension.h"

@interface _EXRunningExtension : NSObject <NSXPCListenerDelegate>



@property (readonly) NSObject<_EXExtensionConfigurationProviding> *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _EXExtension *extension; // ivar: _extension
@property (readonly) NSUInteger hash;
@property (readonly) ? hostAuditToken; // ivar: _hostAuditToken
@property (readonly) NSUInteger signpost; // ivar: _signpost
@property (readonly) Class superclass;


+(*unk)entryPointFunction;
+(id)sharedInstance;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(BOOL)shouldAcceptXPCConnection:(id)arg0 ;
-(int)_startWithArguments:(*char *)arg0 count:(int)arg1 ;
-(int)startWithArguments:(*char *)arg0 count:(int)arg1 ;
-(void)checkIn;
-(void)didFinishLaunching;
-(void)resume;
-(void)willFinishLaunching;


@end


#endif