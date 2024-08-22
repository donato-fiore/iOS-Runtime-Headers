// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DOWNLOADSACTIVITY_H
#define DOWNLOADSACTIVITY_H

@class UINavigationController;


#import "TabDocumentActivity.h"
#import "ActionPanel.h"

@interface DownloadsActivity : TabDocumentActivity {
    UINavigationController *_navigationController;
}


@property (weak) ActionPanel *parentViewController; // ivar: _parentViewController


-(BOOL)canPerformOnNewTabPage;
-(BOOL)canPerformWithTabDocument:(id)arg0 ;
-(NSInteger)actionType;
-(id)_activityBadgeColor;
-(id)_activityBadgeText;
-(id)_activityBadgeTextColor;
-(id)_embeddedActivityViewController;
-(id)_navigationController;
-(id)_systemImageName;
-(id)activityTitle;
-(id)activityType;
-(id)init;
-(void)_downloadsDidChange;
-(void)performActivityWithTabDocument:(id)arg0 ;


@end


#endif