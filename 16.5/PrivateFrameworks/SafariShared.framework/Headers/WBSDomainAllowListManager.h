// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSDOMAINALLOWLISTMANAGER_H
#define WBSDOMAINALLOWLISTMANAGER_H

@class WBSRemotePlistController;

#import <Foundation/Foundation.h>


@interface WBSDomainAllowListManager : NSObject {
    WBSRemotePlistController *_remotePlistController;
}




-(id)init;
-(id)initWithBuiltInAllowListURL:(id)arg0 downloadsDirectoryURL:(id)arg1 resourceName:(id)arg2 resourceVersion:(id)arg3 updateDateDefaultsKey:(id)arg4 updateInterval:(CGFloat)arg5 ;
-(void)isDomainAllowed:(id)arg0 completionHandler:(id)arg1 ;
-(void)prepareForTermination;


@end


#endif