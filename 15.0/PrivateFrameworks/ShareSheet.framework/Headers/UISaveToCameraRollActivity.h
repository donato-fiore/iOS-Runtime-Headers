// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UISAVETOCAMERAROLLACTIVITY_H
#define UISAVETOCAMERAROLLACTIVITY_H



#import "UIActivity.h"
#import "_UISaveToCameraRollSaveItemsController.h"

@interface UISaveToCameraRollActivity : UIActivity

@property (nonatomic) NSInteger imageCount; // ivar: _imageCount
@property (nonatomic) NSInteger livePhotoCount; // ivar: _livePhotoCount
@property (retain, nonatomic) _UISaveToCameraRollSaveItemsController *saveController; // ivar: _saveController
@property (nonatomic) NSInteger videoCount; // ivar: _videoCount


+(NSUInteger)_xpcAttributes;
-(BOOL)_canSaveImages;
-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(id)_activityImage;
-(id)_systemImageName;
-(id)activityTitle;
-(id)activityType;
-(void)performActivity;
-(void)prepareWithActivityItems:(id)arg0 ;


@end


#endif