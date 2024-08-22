// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SFREQUESTDESKTOPSITEQUIRKSMANAGER_H
#define _SFREQUESTDESKTOPSITEQUIRKSMANAGER_H

@class WBSRemotePlistController;

#import <Foundation/Foundation.h>


@interface _SFRequestDesktopSiteQuirksManager : NSObject {
    WBSRemotePlistController *_remotePlistController;
    BOOL _supportsDesktopClassBrowsing;
}




+(id)sharedManager;
-(id)init;
-(void)getAllQuirkValuesWithCompletionHandler:(id)arg0 ;
-(void)quirksValueForDomain:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif