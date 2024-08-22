// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUIFILEACCESSCONTROLLER_H
#define PUIFILEACCESSCONTROLLER_H

@class PSListController, FPAccessControlManager;



@interface PUIFileAccessController : PSListController

@property (retain, nonatomic) FPAccessControlManager *accessManager; // ivar: _accessManager
@property (nonatomic) BOOL isAccess; // ivar: _isAccess


-(id)accesssForSpecifier:(id)arg0 ;
-(id)applicationProxiesDictionary;
-(id)bundleIdentifiersAccessingFiles;
-(id)cameraAccessForSpecifier:(id)arg0 ;
-(id)init;
-(id)specifiers;
-(void)setAccess:(id)arg0 forSpecifier:(id)arg1 ;
-(void)setCameraAccess:(id)arg0 forSpecifier:(id)arg1 ;


@end


#endif