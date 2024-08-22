// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKCOREDUETHANDLER_H
#define CKCOREDUETHANDLER_H


#import <Foundation/Foundation.h>


@interface CKCoreDuetHandler : NSObject



+(void)duetEventsWithIdentifier:(id)arg0 inStreamNamed:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 limit:(NSUInteger)arg4 completionHandler:(id)arg5 ;
+(void)removeAllFromStreamNamed:(id)arg0 completionHandler:(id)arg1 ;
+(void)saveEvents:(id)arg0 toStreamNamed:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif