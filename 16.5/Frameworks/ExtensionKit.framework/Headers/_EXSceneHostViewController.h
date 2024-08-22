// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _EXSCENEHOSTVIEWCONTROLLER_H
#define _EXSCENEHOSTVIEWCONTROLLER_H

@class UIViewController, _EXExtensionProcessHandle, NSString, NSUUID;



@interface _EXSceneHostViewController : UIViewController

@property (retain) _EXExtensionProcessHandle *extensionProcess; // ivar: _extensionProcess
@property (retain) NSString *role; // ivar: _role
@property (retain) NSUUID *sessionUUID; // ivar: _sessionUUID


-(id)initWithExtensionProcess:(id)arg0 sessionUUID:(id)arg1 role:(id)arg2 ;
-(void)loadView;


@end


#endif