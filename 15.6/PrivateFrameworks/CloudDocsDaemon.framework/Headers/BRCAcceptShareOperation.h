// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BRCACCEPTSHAREOPERATION_H
#define BRCACCEPTSHAREOPERATION_H

@class BRCOperation, CKShareMetadata, NSString;
@protocol BRCOperationSubclass;



@interface BRCAcceptShareOperation : BRCOperation <BRCOperationSubclass>

 {
    CKShareMetadata *_shareMetadata;
}


@property (copy, nonatomic) id *acceptShareCompletionBlock; // ivar: _acceptShareCompletionBlock
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)shouldRetryForError:(id)arg0 ;
-(id)initWithShareMetadata:(id)arg0 syncContext:(id)arg1 ;
-(void)finishWithResult:(id)arg0 error:(id)arg1 ;
-(void)main;


@end


#endif