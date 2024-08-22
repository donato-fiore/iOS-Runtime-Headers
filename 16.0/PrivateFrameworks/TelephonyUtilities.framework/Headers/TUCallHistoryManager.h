// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TUCALLHISTORYMANAGER_H
#define TUCALLHISTORYMANAGER_H

@protocol TUCallHistoryManagerDataSource;

#import <Foundation/Foundation.h>


@interface TUCallHistoryManager : NSObject

@property (readonly, nonatomic) NSObject<TUCallHistoryManagerDataSource> *dataSource; // ivar: _dataSource


-(id)init;
-(id)initWithDataSource:(id)arg0 ;
-(void)dealloc;
-(void)updateOutgoingLocalParticipantUUID:(id)arg0 forCallsWithLocalParticipantUUID:(id)arg1 ;
-(void)updateOutgoingLocalParticipantUUID:(id)arg0 forCallsWithOutgoingLocalParticipantUUID:(id)arg1 ;


@end


#endif