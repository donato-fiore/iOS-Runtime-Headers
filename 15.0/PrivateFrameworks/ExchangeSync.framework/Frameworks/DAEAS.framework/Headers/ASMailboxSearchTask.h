// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASMAILBOXSEARCHTASK_H
#define ASMAILBOXSEARCHTASK_H



#import "ASSearchTask.h"

@interface ASMailboxSearchTask : ASSearchTask



-(BOOL)getTopLevelToken:(char *)arg0 outStatusCodePage:(char *)arg1 outStatusToken:(char *)arg2 ;
-(BOOL)processContext:(id)arg0 ;
-(BOOL)requiresEASVersionInformaton;
-(id)replacementObjectForEmailItem:(id)arg0 ;
-(id)requestBody;
-(void)_appendSearchOptions:(id)arg0 ;
-(void)_appendSearchQuery:(id)arg0 ;
-(void)finishWithError:(id)arg0 ;
-(void)performTask;


@end


#endif