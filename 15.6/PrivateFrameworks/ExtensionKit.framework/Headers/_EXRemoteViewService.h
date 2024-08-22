// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _EXREMOTEVIEWSERVICE_H
#define _EXREMOTEVIEWSERVICE_H

@class UIRemoteViewService, NSUUID, _EXExtensionProcess;


#import "_EXHostViewControllerConfiguration.h"

@interface _EXRemoteViewService : UIRemoteViewService {
    NSUUID *_contextToken;
}


@property (readonly) _EXHostViewControllerConfiguration *configuration; // ivar: _configuration
@property (readonly) _EXExtensionProcess *extensionProcess; // ivar: _extensionProcess


-(BOOL)multipleInstances;
-(BOOL)overridesHostAppearance;
-(id)contextToken;
-(id)identifier;
-(id)initWithExtensionConfiguration:(id)arg0 extensionProcess:(id)arg1 contextToken:(id)arg2 ;
-(id)multipleInstancesUUID;
-(id)viewControllerClassName;
-(id)xpcServiceNameRoot;
-(int)processIdentifier;
-(void)beginUsing:(id)arg0 ;
-(void)endUsing:(id)arg0 ;


@end


#endif