// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REMOTEBUNDLELOADER_H
#define REMOTEBUNDLELOADER_H

@class NSString, NSError;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface RemoteBundleLoader : NSObject {
    unsigned int _targetTask;
    int _targetPid;
    id *_releaseOpaqueSymbolicator;
    *? _remoteFunctionAddresses;
    NSString *_helperLaunchPath;
    NSObject<OS_dispatch_queue> *_symbolLookupQueue;
    NSObject<OS_dispatch_queue> *_injectionQueue;
    NSError *_missingSymbolError;
    BOOL _attemptedSymbolLookup;
    BOOL _exited;
}




-(id)initWithTask:(unsigned int)arg0 ;
-(void)_lookupFunctionAddresses:(struct _CSTypeRef )arg0 ;
-(void)dealloc;
-(void)scheduleLibraryLoad:(id)arg0 calling:(id)arg1 arguments:(id)arg2 callback:(id)arg3 ;


@end


#endif