// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKPPTPLUGINMANAGER_H
#define HKPPTPLUGINMANAGER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface HKPPTPluginManager : NSObject {
    NSMutableDictionary *_testClasses;
    NSMutableDictionary *_builtinTests;
}




+(id)sharedPluginManager;
-(Class)classForTestType:(id)arg0 ;
-(id)builtinTests;
-(id)init;
-(void)_loadPPTBundles;
-(void)registerDriverClass:(Class)arg0 ;


@end


#endif