// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRCSHARINGFETCHUSERRECORDIDOPERATION_H
#define BRCSHARINGFETCHUSERRECORDIDOPERATION_H

@class BRCOperation, NSString;
@protocol BRCOperationSubclass;



@interface BRCSharingFetchUserRecordIDOperation : BRCOperation <BRCOperationSubclass>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)shouldRetryForError:(id)arg0 ;
-(id)createActivity;
-(id)initWithSyncContext:(id)arg0 ;
-(void)main;


@end


#endif