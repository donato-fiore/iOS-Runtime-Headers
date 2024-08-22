// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DOCSMARTFOLDERMANAGER_OBJC_H
#define DOCSMARTFOLDERMANAGER_OBJC_H


#import <Foundation/Foundation.h>

#import "_TtC26DocumentManagerExecutables21DOCSmartFolderManager.h"

@interface DOCSmartFolderManager_OBJC : NSObject

@property (retain, nonatomic) _TtC26DocumentManagerExecutables21DOCSmartFolderManager *underlyingSmartFolderManager; // ivar: _underlyingSmartFolderManager


+(id)sharedManager;
-(void)registerDomainDisplayNameProvider:(id)arg0 ;


@end


#endif