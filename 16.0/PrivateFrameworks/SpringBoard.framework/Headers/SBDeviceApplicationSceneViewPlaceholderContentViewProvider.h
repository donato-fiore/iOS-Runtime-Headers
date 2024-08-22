// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBDEVICEAPPLICATIONSCENEVIEWPLACEHOLDERCONTENTVIEWPROVIDER_H
#define SBDEVICEAPPLICATIONSCENEVIEWPLACEHOLDERCONTENTVIEWPROVIDER_H

@class UIUserInterfaceStyleArbiter, NSString;
@protocol SBScenePlaceholderContentViewProvider, SBScenePlaceholderContentViewProviderDelegate;

#import <Foundation/Foundation.h>


@interface SBDeviceApplicationSceneViewPlaceholderContentViewProvider : NSObject <SBScenePlaceholderContentViewProvider>

 {
    UIUserInterfaceStyleArbiter *_userInterfaceStyleArbiter;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBScenePlaceholderContentViewProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_checkApplicationRestorationState:(id)arg0 useSnapshot:(*BOOL)arg1 ;
-(NSUInteger)_contentTypeToSearchFromSceneHandle:(id)arg0 withContext:(id)arg1 ;
-(id)_contentViewFromSceneHandle:(id)arg0 displayConfiguration:(id)arg1 orientation:(NSInteger)arg2 snapshot:(id)arg3 size:(struct CGSize )arg4 statusBarDescriptor:(id)arg5 hasOrientationMismatchForClassicApp:(BOOL)arg6 sizeMatchesContentSize:(BOOL)arg7 ;
-(id)_initWithApplication:(id)arg0 userInterfaceStyleArbiter:(id)arg1 ;
-(id)_loadLiveXIBViewForApplication:(id)arg0 ;
-(id)initWithApplication:(id)arg0 ;
-(id)sceneView:(id)arg0 requestsPlaceholderContentViewWithContext:(id)arg1 ;
-(struct CGSize )_naturalSizeForOrientation:(NSInteger)arg0 referenceSize:(struct CGSize )arg1 ;
-(void)_snapshotsDidChange:(id)arg0 ;
-(void)dealloc;


@end


#endif