// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _LSINSTALLATIONMANAGER_H
#define _LSINSTALLATIONMANAGER_H


#import <Foundation/Foundation.h>


@interface _LSInstallationManager : NSObject



+(id)sharedInstance;
-(id)install:(id)arg0 withCompletionBlock:(id)arg1 ;
-(id)uninstall:(id)arg0 withCompletionBlock:(id)arg1 ;


@end


#endif