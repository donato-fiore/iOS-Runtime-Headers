// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DDCLIENTPREVIEWACTION_H
#define DDCLIENTPREVIEWACTION_H



#import "DDPreviewAction.h"

@interface DDClientPreviewAction : DDPreviewAction



+(BOOL)clientCanPerformActionWithUrl:(id)arg0 ;
+(id)clientActionsDelegate;
+(void)setClientActionsDelegate:(id)arg0 ;
-(id)iconName;
-(id)localizedName;
-(id)menuActions;
-(id)viewController;
-(void)performFromView:(id)arg0 ;


@end


#endif