// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALDAVACCOUNTDELEGATESREFRESHOPERATION_H
#define CALDAVACCOUNTDELEGATESREFRESHOPERATION_H

@class CalDAVOperation;
@protocol CalDAVAccountDelegatesRefreshDelegate;



@interface CalDAVAccountDelegatesRefreshOperation : CalDAVOperation

@property (nonatomic) NSObject<CalDAVAccountDelegatesRefreshDelegate> *mdelegate; // ivar: _mdelegate


-(void)refreshDelegates;
-(void)taskGroup:(id)arg0 didFinishWithError:(id)arg1 ;


@end


#endif