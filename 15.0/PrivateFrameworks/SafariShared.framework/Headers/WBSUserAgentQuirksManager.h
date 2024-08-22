// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSUSERAGENTQUIRKSMANAGER_H
#define WBSUSERAGENTQUIRKSMANAGER_H

@class WBSRemotePlistController;

#import <Foundation/Foundation.h>


@interface WBSUserAgentQuirksManager : NSObject {
    WBSRemotePlistController *_remotePlistController;
}




-(id)init;
-(id)initWithBuiltInQuirkListURL:(id)arg0 downloadsDirectoryURL:(id)arg1 resourceName:(id)arg2 resourceVersion:(id)arg3 updateDateDefaultsKey:(id)arg4 updateInterval:(CGFloat)arg5 ;
-(void)getQuirksForDomain:(id)arg0 completionHandler:(id)arg1 ;
-(void)prepareForTermination;


@end


#endif