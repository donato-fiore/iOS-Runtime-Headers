// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ISSTREAMSFACTORY_H
#define ISSTREAMSFACTORY_H


#import <Foundation/Foundation.h>


@interface ISStreamsFactory : NSObject



+(?)constructWithFilter:(?)arg0 startTime:(?)arg1 endTime:(?)arg2 maxEvents:(?)arg3 lastN:(?)arg4 storageURLcompletionHandler;
+(?)constructWithFilter:(?)arg0 startTime:(?)arg1 endTime:(?)arg2 maxEvents:(?)arg3 lastNcompletionHandler;
+(?)constructWithFilter:(?)arg0 startTimeRelativeToNow:(?)arg1 storageURLcompletionHandler;
+(?)constructWithFilter:(?)arg0 startTimeRelativeToNowcompletionHandler;
-(id)init;


@end


#endif