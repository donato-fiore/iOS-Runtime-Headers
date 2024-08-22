// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DESSANDBOXMANAGER_H
#define DESSANDBOXMANAGER_H

@class NSArray, NSMutableArray;

#import <Foundation/Foundation.h>


@interface DESSandBoxManager : NSObject {
    NSArray *_extensions;
    NSMutableArray *_consumedSandboxExtensions;
}




+(id)sandboxExtensionsToXPCConnection:(id)arg0 fileURLs:(id)arg1 requireWrite:(BOOL)arg2 outError:(*id)arg3 ;
-(BOOL)consumeExtensionsWithError:(*id)arg0 ;
-(id)initWithExtensions:(id)arg0 ;
-(void)dealloc;
-(void)releaseExtensions;


@end


#endif