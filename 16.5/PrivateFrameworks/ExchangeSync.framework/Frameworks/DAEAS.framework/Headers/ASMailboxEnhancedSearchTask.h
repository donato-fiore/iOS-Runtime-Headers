// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASMAILBOXENHANCEDSEARCHTASK_H
#define ASMAILBOXENHANCEDSEARCHTASK_H

@class NSString;


#import "ASSearchTask.h"

@interface ASMailboxEnhancedSearchTask : ASSearchTask {
    NSString *_searchId;
}




-(BOOL)getTopLevelToken:(char *)arg0 outStatusCodePage:(char *)arg1 outStatusToken:(char *)arg2 ;
-(BOOL)processContext:(id)arg0 ;
-(BOOL)requiresEASVersionInformaton;
-(id)initWithQuery:(id)arg0 ;
-(id)replacementObjectForEmailItem:(id)arg0 ;
-(id)requestBody;
-(int)commandCode;
-(void)_appendSearchOptions:(id)arg0 ;
-(void)_appendSearchQuery:(id)arg0 ;
-(void)finishWithError:(id)arg0 ;
-(void)performTask;


@end


#endif