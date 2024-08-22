// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DDPARSECACTION_H
#define DDPARSECACTION_H

@protocol DDParsecCollectionDelegate;


#import "DDPreviewAction.h"
#import "DDParsecCollectionViewController.h"

@interface DDParsecAction : DDPreviewAction <DDParsecCollectionDelegate>

 {
    DDParsecCollectionViewController *_parsecViewController;
    BOOL _previewMode;
}




+(BOOL)isAvailable;
-(id)createViewController;
-(id)localizedName;
-(int)interactionType;
-(void)interactionDidFinishAndRequiresDismissal:(BOOL)arg0 ;


@end


#endif