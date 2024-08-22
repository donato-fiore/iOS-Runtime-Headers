// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef COREDAVGETTASK_H
#define COREDAVGETTASK_H

@protocol CoreDAVTaskDelegate;


#import "CoreDAVTask.h"

@interface CoreDAVGetTask : CoreDAVTask

@property (retain, nonatomic) id *appSpecificDataItemResult; // ivar: _appSpecificDataItemResult
@property (weak, nonatomic) NSObject<CoreDAVTaskDelegate> *delegate;
@property (nonatomic) BOOL forceNoCache; // ivar: _forceNoCache


-(NSUInteger)cachePolicy;
-(id)copyDefaultParserForContentType:(id)arg0 ;
-(id)description;
-(id)httpMethod;
-(id)requestBody;
-(void)finishCoreDAVTaskWithError:(id)arg0 ;


@end


#endif