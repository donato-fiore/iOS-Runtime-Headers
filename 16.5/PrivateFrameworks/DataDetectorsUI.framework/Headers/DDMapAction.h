// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DDMAPACTION_H
#define DDMAPACTION_H



#import "DDRemoteAction.h"

@interface DDMapAction : DDRemoteAction



+(?)handlesUrlresult;
+(BOOL)actionAvailableForContact:(id)arg0 ;
+(id)viewControllerProviderClass;
-(?)initWithURL:(?)arg0 resultcontext;
-(id)commitURL;
-(id)menuActionClasses;
-(id)previewActions;


@end


#endif