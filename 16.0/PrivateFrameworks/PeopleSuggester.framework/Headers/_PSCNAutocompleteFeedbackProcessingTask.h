// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PSCNAUTOCOMPLETEFEEDBACKPROCESSINGTASK_H
#define _PSCNAUTOCOMPLETEFEEDBACKPROCESSINGTASK_H


#import <Foundation/Foundation.h>


@interface _PSCNAutocompleteFeedbackProcessingTask : NSObject



+(id)bookmarkFileNameForImplicit:(BOOL)arg0 ;
+(id)bundleIDsToProcess;
+(id)loadBookmarkTimeOverImplicit:(BOOL)arg0 from:(id)arg1 ;
+(id)sourceBundleIDsToIgnore;
+(void)persistBookmarkTime:(id)arg0 overImplicit:(BOOL)arg1 to:(id)arg2 ;
+(void)runOverExplicit;
+(void)runOverImplicit;
+(void)runWithInferredEnterAndExit:(BOOL)arg0 overImplicit:(BOOL)arg1 eventFilter:(id)arg2 ;
-(void)execute;


@end


#endif