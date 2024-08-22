// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef COREDAVPUTTASK_H
#define COREDAVPUTTASK_H

@class NSString;
@protocol CoreDAVTaskDelegate;


#import "CoreDAVPostOrPutTask.h"

@interface CoreDAVPutTask : CoreDAVPostOrPutTask

@property (weak, nonatomic) NSObject<CoreDAVTaskDelegate> *delegate;
@property (retain, nonatomic) NSString *nextETag; // ivar: _nextETag


-(id)description;
-(id)httpMethod;
-(void)finishCoreDAVTaskWithError:(id)arg0 ;


@end


#endif