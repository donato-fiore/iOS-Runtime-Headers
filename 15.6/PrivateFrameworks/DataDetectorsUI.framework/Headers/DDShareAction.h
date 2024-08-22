// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DDSHAREACTION_H
#define DDSHAREACTION_H



#import "DDAction.h"

@interface DDShareAction : DDAction



-(?)initWithURL:(?)arg0 resultcontext;
-(id)iconName;
-(id)localizedName;
-(id)viewController;
-(int)interactionType;
-(void)performFromView:(id)arg0 ;
-(void)prepareViewControllerForActionController:(id)arg0 ;


@end


#endif