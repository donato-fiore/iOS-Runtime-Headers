// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UISHAREPLAYACTIVITY_H
#define UISHAREPLAYACTIVITY_H

@class NSString;
@protocol SHSheetGroupActivitySharingControllerDelegate, UIPeopleSuggestionRecipientActivity;


#import "UIActivity.h"
#import "SHSheetGroupActivitySharingController.h"

@interface UISharePlayActivity : UIActivity <SHSheetGroupActivitySharingControllerDelegate, UIPeopleSuggestionRecipientActivity>



@property (retain, nonatomic) SHSheetGroupActivitySharingController *groupActivitySharingController; // ivar: _groupActivitySharingController
@property (copy, nonatomic) NSString *sessionID;


+(BOOL)_canPerform;
+(NSInteger)activityCategory;
+(NSUInteger)_xpcAttributes;
-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(NSInteger)_defaultSortGroup;
-(id)_systemImageName;
-(id)activityImage;
-(id)activityTitle;
-(id)activityType;
-(id)activityViewController;
-(void)_cleanup;
-(void)groupActivitySharingController:(id)arg0 didFinish:(BOOL)arg1 ;
-(void)prepareWithActivityItems:(id)arg0 ;


@end


#endif