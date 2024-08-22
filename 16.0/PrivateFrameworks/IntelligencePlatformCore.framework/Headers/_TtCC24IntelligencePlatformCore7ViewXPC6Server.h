// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTCC24INTELLIGENCEPLATFORMCORE7VIEWXPC6SERVER_H
#define _TTCC24INTELLIGENCEPLATFORMCORE7VIEWXPC6SERVER_H

@protocol GDViewXPCProtocol;

#import <Foundation/Foundation.h>


@interface _TtCC24IntelligencePlatformCore7ViewXPC6Server : NSObject <GDViewXPCProtocol>

 {
    ? auditToken;
    ? clientIdentifier;
}




-(?)accessTokenForViewName:(?)arg0 isSandboxedcompletion;
-(?)performUpdateForViewNames:(?)arg0 includeDependenciescompletion;
-(id)init;
-(void)accessTokenForFeaturesWithIsSandboxed:(BOOL)arg0 completion:(id)arg1 ;
-(void)featureKeys:(id)arg0 ;


@end


#endif