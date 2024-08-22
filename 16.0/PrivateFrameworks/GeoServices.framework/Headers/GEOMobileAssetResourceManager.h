// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOMOBILEASSETRESOURCEMANAGER_H
#define GEOMOBILEASSETRESOURCEMANAGER_H


#import <Foundation/Foundation.h>


@interface GEOMobileAssetResourceManager : NSObject



+(id)sharedManager;
-(void)fetchResourceOfType:(NSUInteger)arg0 extraParameters:(id)arg1 options:(NSUInteger)arg2 result:(id)arg3 ;
-(void)notifyResourceIsCorrupt:(id)arg0 ;
-(void)updateNow;


@end


#endif