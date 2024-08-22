// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PMSAVEVIDEOACTIVITY_H
#define PMSAVEVIDEOACTIVITY_H

@class UISaveToCameraRollActivity, PHObjectPlaceholder;



@interface PMSaveVideoActivity : UISaveToCameraRollActivity

@property (retain, nonatomic) PHObjectPlaceholder *placeholderForCreatedAsset; // ivar: _placeholderForCreatedAsset


-(id)activityType;
-(void)prepareWithActivityItems:(id)arg0 ;


@end


#endif