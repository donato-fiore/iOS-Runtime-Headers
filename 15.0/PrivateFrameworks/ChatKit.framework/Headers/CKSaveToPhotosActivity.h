// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKSAVETOPHOTOSACTIVITY_H
#define CKSAVETOPHOTOSACTIVITY_H

@class UIActivity, UIViewController;


#import "CKMediaObject.h"

@interface CKSaveToPhotosActivity : UIActivity

@property (readonly, nonatomic) CKMediaObject *mediaObject; // ivar: _mediaObject
@property (readonly, weak, nonatomic) UIViewController *presenterViewController; // ivar: _presenterViewController


+(NSInteger)activityCategory;
-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(id)_systemImageName;
-(id)activityTitle;
-(id)activityType;
-(id)initWithMediaObject:(id)arg0 presenterViewController:(id)arg1 ;
-(void)performActivity;


@end


#endif