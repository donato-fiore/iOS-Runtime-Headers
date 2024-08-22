// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXMIMAGECAPTIONMODELASSETMANAGER_H
#define AXMIMAGECAPTIONMODELASSETMANAGER_H

@class AXAssetController, NSURL, NSString;
@protocol AXAssetControllerObserver;

#import <Foundation/Foundation.h>


@interface AXMImageCaptionModelAssetManager : NSObject <AXAssetControllerObserver>

 {
    os_unfair_lock_s _lock;
    BOOL _didTryWaitingForAssetLookup;
    AXAssetController *_assetController;
}


@property (copy, nonatomic) NSURL *baseURL; // ivar: _baseURL
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)_modelURLForType:(NSUInteger)arg0 baseURL:(id)arg1 ;
-(id)infoForModelAtURL:(id)arg0 ;
-(id)init;
-(id)modelURLForType:(NSUInteger)arg0 timeout:(CGFloat)arg1 ;
-(void)_performWithLock:(id)arg0 ;
-(void)assetController:(id)arg0 didFinishRefreshingAssets:(id)arg1 wasSuccessful:(BOOL)arg2 error:(id)arg3 ;


@end


#endif