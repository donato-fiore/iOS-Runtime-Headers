// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICPAPERCOMMONUTILITIES_H
#define ICPAPERCOMMONUTILITIES_H


#import <Foundation/Foundation.h>


@interface ICPaperCommonUtilities : NSObject



+(BOOL)shouldResumeLastQuickNote;
+(BOOL)shouldShowLinksWhenComposingQuickNote;
+(id)activitiesToExcludeForNote:(id)arg0 currentUserActivity:(id)arg1 ;
-(id)init;


@end


#endif