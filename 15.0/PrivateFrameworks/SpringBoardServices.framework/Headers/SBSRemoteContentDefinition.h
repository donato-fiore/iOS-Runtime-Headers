// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSREMOTECONTENTDEFINITION_H
#define SBSREMOTECONTENTDEFINITION_H

@class NSString, NSDictionary;
@protocol BSXPCCoding, BSDescriptionProviding, NSCopying, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface SBSRemoteContentDefinition : NSObject <BSXPCCoding, BSDescriptionProviding, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *serviceName; // ivar: _serviceName
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDictionary *userInfo; // ivar: _userInfo
@property (readonly, copy, nonatomic) NSString *viewControllerClassName; // ivar: _viewControllerClassName
@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcEndpoint; // ivar: _xpcEndpoint


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initWithServiceName:(id)arg0 viewControllerClassName:(id)arg1 ;
-(id)initWithServiceName:(id)arg0 viewControllerClassName:(id)arg1 xpcEndpoint:(id)arg2 userInfo:(id)arg3 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif