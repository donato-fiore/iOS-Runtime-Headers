// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _NSBUNDLEODRDATACOMMON_H
#define _NSBUNDLEODRDATACOMMON_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "NSLock.h"
#import "NSBundle.h"

@interface _NSBundleODRDataCommon : NSObject {
    NSMutableDictionary *_assetPackToURL;
    NSLock *_lock;
    NSBundle *_bundle;
    NSInteger _sandboxToken;
}




-(BOOL)assetPacksBecameAvailable:(id)arg0 error:(*id)arg1 ;
-(BOOL)assetPacksBecameUnavailable:(id)arg0 error:(*id)arg1 ;
-(id)initWithBundle:(id)arg0 ;
-(void)dealloc;


@end


#endif