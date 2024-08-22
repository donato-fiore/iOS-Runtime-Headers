// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUCAMERACLOUDSTORAGEITEMPROVIDER_H
#define HUCAMERACLOUDSTORAGEITEMPROVIDER_H

@class HFStaticItemProvider, HMCameraProfile;



@interface HUCameraCloudStorageItemProvider : HFStaticItemProvider

@property (readonly, copy, nonatomic) HMCameraProfile *cameraProfile; // ivar: _cameraProfile


-(id)init;
-(id)initWithCameraProfile:(id)arg0 ;


@end


#endif