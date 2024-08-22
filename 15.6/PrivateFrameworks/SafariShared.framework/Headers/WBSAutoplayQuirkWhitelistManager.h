// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSAUTOPLAYQUIRKWHITELISTMANAGER_H
#define WBSAUTOPLAYQUIRKWHITELISTMANAGER_H

@class WBSRemotePlistController;

#import <Foundation/Foundation.h>


@interface WBSAutoplayQuirkWhitelistManager : NSObject {
    WBSRemotePlistController *_remotePlistController;
}




-(id)init;
-(id)initWithBuiltInWhitelistURL:(id)arg0 downloadsDirectoryURL:(id)arg1 resourceName:(id)arg2 resourceVersion:(id)arg3 updateDateDefaultsKey:(id)arg4 updateInterval:(CGFloat)arg5 ;
-(void)prepareForTermination;
-(void)quirksForDomain:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif