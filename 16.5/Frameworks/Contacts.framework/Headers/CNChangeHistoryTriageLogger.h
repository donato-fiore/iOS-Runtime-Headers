// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNCHANGEHISTORYTRIAGELOGGER_H
#define CNCHANGEHISTORYTRIAGELOGGER_H

@class NSString;
@protocol CNChangeHistoryEventVisitorPrivate, OS_os_log;

#import <Foundation/Foundation.h>


@interface CNChangeHistoryTriageLogger : NSObject <CNChangeHistoryEventVisitorPrivate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned char defaultLogType; // ivar: _defaultLogType
@property (readonly, copy) NSString *description;
@property (readonly) unsigned char destructiveLogType; // ivar: _destructiveLogType
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<OS_os_log> *os_log; // ivar: _os_log
@property (readonly) Class superclass;


+(id)fetchLogger;
+(id)log;
+(id)saveLogger;
-(id)init;
-(id)initWithOSLog:(id)arg0 defaultLogType:(unsigned char)arg1 destructiveLogType:(unsigned char)arg2 ;
-(void)didExecuteSaveRequest;
-(void)didFetchHistoryEvents:(id)arg0 anchor:(id)arg1 ;
-(void)didFetchHistoryEventsCount:(NSInteger)arg0 anchor:(id)arg1 truncated:(BOOL)arg2 ;
-(void)fetchDidFailToTranslateWithError:(id)arg0 ;
-(void)fetchDidFailWithError:(id)arg0 ;
-(void)visitAddContactEvent:(id)arg0 ;
-(void)visitAddGroupEvent:(id)arg0 ;
-(void)visitAddMemberToGroupEvent:(id)arg0 ;
-(void)visitAddSubgroupToGroupEvent:(id)arg0 ;
-(void)visitDeleteContactEvent:(id)arg0 ;
-(void)visitDeleteGroupEvent:(id)arg0 ;
-(void)visitDifferentMeCardEvent:(id)arg0 ;
-(void)visitDropEverythingEvent:(id)arg0 ;
-(void)visitLinkContactsEvent:(id)arg0 ;
-(void)visitPreferredContactForImageEvent:(id)arg0 ;
-(void)visitPreferredContactForNameEvent:(id)arg0 ;
-(void)visitRemoveMemberFromGroupEvent:(id)arg0 ;
-(void)visitRemoveSubgroupFromGroupEvent:(id)arg0 ;
-(void)visitUnlinkContactEvent:(id)arg0 ;
-(void)visitUpdateContactEvent:(id)arg0 ;
-(void)visitUpdateGroupEvent:(id)arg0 ;
-(void)willExecuteSaveRequest;
-(void)willFetchHistoryWithRequest:(id)arg0 ;


@end


#endif