// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUASSETSHARINGHELPER_H
#define PUASSETSHARINGHELPER_H

@class NSString;
@protocol PXAssetsSharingHelper, PXAssetsSharingHelperDelegate;

#import <Foundation/Foundation.h>


@interface PUAssetSharingHelper : NSObject <PXAssetsSharingHelper>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXAssetsSharingHelperDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)copyAssets:(id)arg0 completionHandler:(id)arg1 ;
+(void)prepareAssets:(id)arg0 forActivityType:(id)arg1 completion:(id)arg2 ;
-(void)_presentViewController:(id)arg0 ;
-(void)copyAssets:(id)arg0 ;
-(void)ensureLocalAssetsForCloudPhotoSharing:(id)arg0 completion:(id)arg1 ;
-(void)ensureLocalAssetsForRendering:(id)arg0 completion:(id)arg1 ;
-(void)ensureLocalAssetsForSyndicationSave:(id)arg0 completion:(id)arg1 ;


@end


#endif