// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRCFETCHQUOTAOPERATION_H
#define BRCFETCHQUOTAOPERATION_H

@class BRCOperation, NSString;
@protocol BRCOperationSubclass;



@interface BRCFetchQuotaOperation : BRCOperation <BRCOperationSubclass>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)shouldRetryForError:(id)arg0 ;
-(id)initWithSession:(id)arg0 ;
-(void)main;


@end


#endif