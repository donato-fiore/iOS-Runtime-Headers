// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBAPPLICATIONSUPPORTSERVICEREQUESTCONTEXT_H
#define SBAPPLICATIONSUPPORTSERVICEREQUESTCONTEXT_H

@class UISApplicationInitializationContext;

#import <Foundation/Foundation.h>

#import "SBApplication.h"

@interface SBApplicationSupportServiceRequestContext : NSObject {
    BOOL _hostIsSpringBoard;
    SBApplication *_app;
    SBApplication *_hostApp;
    SBApplication *_extensionContainingApp;
    UISApplicationInitializationContext *_applicationInitializationContext;
}


@property (readonly, nonatomic) UISApplicationInitializationContext *applicationInitializationContext;


+(id)_hostProcessForProcess:(id)arg0 ;
+(id)hostingApplicationBundleIDForPid:(int)arg0 ;
+(id)initializationContextForClient:(id)arg0 ;
-(NSInteger)_main_effectiveClassicMode;
-(NSUInteger)_main_effectiveScreenType;
-(id)_main_deviceContext;
-(id)_main_displayContext;
-(id)_main_persistenceIDs;
-(id)initWithApplication:(id)arg0 ;
-(id)initWithClient:(id)arg0 host:(id)arg1 ;


@end


#endif