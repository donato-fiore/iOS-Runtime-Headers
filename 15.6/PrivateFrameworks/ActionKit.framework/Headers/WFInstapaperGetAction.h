// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFINSTAPAPERGETACTION_H
#define WFINSTAPAPERGETACTION_H



#import "WFInstapaperAction.h"

@interface WFInstapaperGetAction : WFInstapaperAction



-(BOOL)includeSpecialFolders;
-(id)connectionTypes;
-(void)engine:(id)arg0 connection:(id)arg1 didReceiveBookmarks:(id)arg2 ofUser:(id)arg3 forFolder:(id)arg4 ;
-(void)runAsynchronouslyWithInput:(id)arg0 selectedFolder:(id)arg1 ;


@end


#endif