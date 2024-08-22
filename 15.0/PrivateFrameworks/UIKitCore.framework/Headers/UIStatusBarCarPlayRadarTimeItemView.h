// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UISTATUSBARCARPLAYRADARTIMEITEMVIEW_H
#define UISTATUSBARCARPLAYRADARTIMEITEMVIEW_H



#import "UIStatusBarCarPlayTimeItemView.h"

@interface UIStatusBarCarPlayRadarTimeItemView : UIStatusBarCarPlayTimeItemView {
    BOOL _isInternalInstall;
    BOOL _radarItemEnabled;
    BOOL _currentlyGatheringLogs;
}




-(BOOL)_showRadarButtonForInternalInstalls;
-(BOOL)allowsUserInteraction;
-(BOOL)canBecomeFocused;
-(BOOL)showsTouchWhenHighlighted;
-(BOOL)usesAdvancedActions;
-(NSInteger)buttonType;
-(id)_timeImageSet;
-(id)contentsImage;
-(id)highlightImage;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_gatheringLogsDidChangeStatusNotification:(id)arg0 ;
-(void)dealloc;


@end


#endif