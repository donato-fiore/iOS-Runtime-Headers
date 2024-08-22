// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCSHARINGCOPYWEBAUTHTOKENOPERATION_H
#define BRCSHARINGCOPYWEBAUTHTOKENOPERATION_H

@class BRCFrameworkOperation, NSString;
@protocol BRCOperationSubclass;



@interface BRCSharingCopyWebAuthTokenOperation : BRCFrameworkOperation <BRCOperationSubclass>



@property (retain, nonatomic) NSString *ckContainerID; // ivar: _ckContainerID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)shouldRetryForError:(id)arg0 ;
-(id)createActivity;
-(id)initWithSyncContext:(id)arg0 ckContainerID:(id)arg1 ;
-(void)main;


@end


#endif