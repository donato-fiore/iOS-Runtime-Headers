// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BDSREADINGGOALSSERVICECLIENT_H
#define BDSREADINGGOALSSERVICECLIENT_H

@protocol BDSServiceProtocol;

#import <Foundation/Foundation.h>


@interface BDSReadingGoalsServiceClient : NSObject

@property (copy, nonatomic) id *onRemoteChange; // ivar: _onRemoteChange
@property (readonly, nonatomic) NSObject<BDSServiceProtocol> *serviceProxy; // ivar: _serviceProxy


+(id)sharedServiceProxy;
+(void)clearLocalCachedDataWithCompletionHandler:(id)arg0 ;
-(id)init;
-(void)_handleOnRemoteChange:(id)arg0 ;
-(void)changeBooksFinishedGoalTo:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)changeDailyGoalTo:(CGFloat)arg0 completionHandler:(id)arg1 ;
-(void)clearDataWithCompletionHandler:(id)arg0 ;
-(void)dealloc;
-(void)stateInfoWithCompletionHandler:(id)arg0 ;


@end


#endif