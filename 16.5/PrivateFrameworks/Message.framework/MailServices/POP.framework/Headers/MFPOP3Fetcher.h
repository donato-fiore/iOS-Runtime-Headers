// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFPOP3FETCHER_H
#define MFPOP3FETCHER_H


#import <Foundation/Foundation.h>


@interface MFPOP3Fetcher : NSObject



+(NSInteger)_fetchWithAccount:(id)arg0 intoQueue:(id)arg1 newMessages:(NSUInteger)arg2 oldMessages:(NSUInteger)arg3 preservingUID:(id)arg4 withStore:(id)arg5 ;
+(NSInteger)fetchWithAccount:(id)arg0 newMessages:(NSUInteger)arg1 oldMessages:(NSUInteger)arg2 preservingUID:(id)arg3 withStore:(id)arg4 ;


@end


#endif