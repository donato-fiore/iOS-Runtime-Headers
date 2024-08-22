// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BSXPCBUNDLE_H
#define BSXPCBUNDLE_H

@class NSString, NSDictionary;
@protocol BSDescriptionProviding, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface BSXPCBundle : NSObject <BSDescriptionProviding>



@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, copy, nonatomic) NSString *bundlePath; // ivar: _bundlePath
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *executablePath; // ivar: _executablePath
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSDictionary *infoDictionary; // ivar: _infoDictionary
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *xpcBundle; // ivar: _xpcBundle


+(id)bundleForPID:(int)arg0 ;
+(id)bundleWithExecutablePath:(id)arg0 ;
+(id)bundleWithPath:(id)arg0 ;
+(id)bundleWithXPCBundle:(id)arg0 ;
+(id)mainBundle;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif