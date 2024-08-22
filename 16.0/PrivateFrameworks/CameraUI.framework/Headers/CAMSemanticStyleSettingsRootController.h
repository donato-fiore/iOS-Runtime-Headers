// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMSEMANTICSTYLESETTINGSROOTCONTROLLER_H
#define CAMSEMANTICSTYLESETTINGSROOTCONTROLLER_H

@class UIViewController, NSString;
@protocol CAMSemanticStyleSettingsViewDelegate;


#import "CAMSemanticStyleSettingsView.h"

@interface CAMSemanticStyleSettingsRootController : UIViewController <CAMSemanticStyleSettingsViewDelegate>



@property (readonly, nonatomic) CAMSemanticStyleSettingsView *_settingsView; // ivar: __settingsView
@property (copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(void)_dismiss;
-(void)loadView;
-(void)settingsViewDidDismiss:(id)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif