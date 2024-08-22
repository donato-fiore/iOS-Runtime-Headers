// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CMPROGRESSIVEARCHIVEMANAGER_H
#define CMPROGRESSIVEARCHIVEMANAGER_H

@class NSMutableDictionary, NSDate, NSMutableString;


#import "CMStylingArchiveManager.h"

@interface CMProgressiveArchiveManager : CMStylingArchiveManager {
    *void mClient;
    *? mCallBacks;
    NSMutableDictionary *mDataCache;
    BOOL mMainDataInited;
    NSDate *mStartDate;
    NSDate *mLastCommitDate;
    NSMutableString *mHtmlLogString;
}




-(BOOL)isCancelled;
-(BOOL)isProgressive;
-(id)copyResourceWithName:(id)arg0 type:(int)arg1 ;
-(id)initWithClient:(*void)arg0 andCallBacks:(struct ? *)arg1 ;
-(void)closeResourceAtPath:(id)arg0 ;
-(void)commitDataAtPath:(id)arg0 ;
-(void)pushCssToPath:(id)arg0 ;
-(void)pushData:(id)arg0 toPath:(id)arg1 ;
-(void)pushText:(id)arg0 toPath:(id)arg1 ;


@end


#endif