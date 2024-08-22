// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DEDFBKFEEDBACKUPLOAD_H
#define DEDFBKFEEDBACKUPLOAD_H


#import <Foundation/Foundation.h>


@interface DEDFBKFeedbackUpload : NSObject



+(void)cleanUpIfNeeded;
+(void)cleanUpIfNeededWithDefaults:(id)arg0 ;
+(void)compactMapOnFeedbackUploadsWithUserDefaults:(id)arg0 block:(id)arg1 ;
+(void)didFinishUploadOnBugSessionIdentifier:(id)arg0 ;
+(void)didFinishUploadOnBugSessionIdentifier:(id)arg0 withDefaults:(id)arg1 ;


@end


#endif