// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASGALSEARCHTASK_H
#define ASGALSEARCHTASK_H



#import "ASSearchTask.h"

@interface ASGALSearchTask : ASSearchTask



-(BOOL)getTopLevelToken:(char *)arg0 outStatusCodePage:(char *)arg1 outStatusToken:(char *)arg2 ;
-(BOOL)processContext:(id)arg0 ;
-(id)requestBody;
-(void)finishWithError:(id)arg0 ;
-(void)performTask;


@end


#endif