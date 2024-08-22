// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DDADDEVENTACTION_H
#define DDADDEVENTACTION_H



#import "DDAction.h"
#import "DDRemoteActionViewController.h"

@interface DDAddEventAction : DDAction

@property (retain, nonatomic) DDRemoteActionViewController *viewController; // ivar: viewController


+(BOOL)actionAvailableForEvent:(id)arg0 ;
+(id)cachedEventForICSString:(id)arg0 ;
-(id)compactTitle;
-(id)iconName;
-(id)localizedName;
-(id)notificationIconBundleIdentifier;
-(id)notificationTitle;
-(id)notificationURL;
-(id)variantIconName;
-(int)interactionType;
-(void)invalidate;
-(void)prepareViewControllerForActionController:(id)arg0 ;


@end


#endif