// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMFULLSCREENEFFECTBUNDLEMANAGER_H
#define IMFULLSCREENEFFECTBUNDLEMANAGER_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface IMFullScreenEffectBundleManager : NSObject {
    NSDictionary *_fullScreenMomentBundles;
}


@property (retain, nonatomic) NSString *bundleDirectory; // ivar: _bundleDirectory
@property (readonly, nonatomic) NSDictionary *fullScreenMomentBundles;


+(id)__singleton__im;
+(id)effectIdentifiersInPickerOrder;
+(id)sharedInstance;
+(void)__setSingleton__im:(id)arg0 ;
-(BOOL)hasFullScreenMomentForIdentifier:(id)arg0 ;
-(BOOL)loadAllBundlesFromPath:(id)arg0 bundles:(*id)arg1 error:(*id)arg2 ;
-(id)effectBundleForIdentifier:(id)arg0 ;
-(id)fullScreenMomentForIdentifier:(id)arg0 ;
-(id)init;
-(id)loadEffectBundle:(id)arg0 error:(*id)arg1 ;
-(id)localizedDisplayNameForEffectWithIdentifier:(id)arg0 ;
-(id)localizedStringForKey:(id)arg0 fromBundleWithIdentifier:(id)arg1 ;
-(id)triggeredFullScreenEffectForType:(id)arg0 ;
-(void)dealloc;
-(void)didReceiveMemoryWarning:(id)arg0 ;


@end


#endif