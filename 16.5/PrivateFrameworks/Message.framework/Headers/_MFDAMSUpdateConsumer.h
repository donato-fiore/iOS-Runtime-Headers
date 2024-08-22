// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MFDAMSUPDATECONSUMER_H
#define _MFDAMSUPDATECONSUMER_H

@class MFDAMSBasicConsumer, NSString;
@protocol MFDASyncActionsConsumer;



@interface _MFDAMSUpdateConsumer : MFDAMSBasicConsumer <MFDASyncActionsConsumer>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)handleItems:(id)arg0 ;
-(void)commitSyncActions;
-(void)drainMailbox;
-(void)handleResponse:(id)arg0 error:(id)arg1 ;
-(void)receiveSyncActions:(id)arg0 ;


@end


#endif