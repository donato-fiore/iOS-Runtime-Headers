// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSTRIALASSETMANAGER_H
#define CSTRIALASSETMANAGER_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface CSTrialAssetManager : NSObject {
    NSDictionary *_trialClientDict;
}




+(id)sharedInstance;
-(id)init;
-(void)_getSiriAttAssetsForType:(NSUInteger)arg0 forLocale:(id)arg1 completion:(id)arg2 ;
-(void)getInstalledAssetofType:(NSUInteger)arg0 forLocale:(id)arg1 completion:(id)arg2 ;


@end


#endif