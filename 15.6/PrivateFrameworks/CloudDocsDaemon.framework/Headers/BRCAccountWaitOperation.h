// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BRCACCOUNTWAITOPERATION_H
#define BRCACCOUNTWAITOPERATION_H

@class BRCOperation, CKContainer, NSString;
@protocol BRCOperationSubclass, OS_dispatch_source;



@interface BRCAccountWaitOperation : BRCOperation <BRCOperationSubclass>

 {
    NSObject<OS_dispatch_source> *_source;
    CKContainer *_ckContainer;
    NSInteger _lastAccountStatus;
    BOOL _resumed;
    BOOL _cancelled;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)shouldRetryForError:(id)arg0 ;
-(id)createActivity;
-(id)descriptionForCKAccountStatus:(NSInteger)arg0 dumpContext:(id)arg1 ;
-(id)initWithCKContainer:(id)arg0 ;
-(id)subclassableDescriptionWithContext:(id)arg0 ;
-(void)_accountChangeHandler;
-(void)_accountDidChange;
-(void)cancel;
-(void)dealloc;
-(void)finishWithResult:(id)arg0 error:(id)arg1 ;
-(void)main;
-(void)resumeIfNecessary;
-(void)start;


@end


#endif