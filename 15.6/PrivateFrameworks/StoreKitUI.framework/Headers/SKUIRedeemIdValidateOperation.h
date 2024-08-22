// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIREDEEMIDVALIDATEOPERATION_H
#define SKUIREDEEMIDVALIDATEOPERATION_H

@class ISOperation, NSString, NSDictionary;
@protocol ISDialogOperationDelegate;



@interface SKUIRedeemIdValidateOperation : ISOperation <ISDialogOperationDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSDictionary *dictionary; // ivar: _dictionary
@property (readonly) NSUInteger hash;
@property (copy) id *resultBlock; // ivar: _resultBlock
@property (readonly) Class superclass;


-(id)_subOperation;
-(id)initWithDictionary:(id)arg0 ;
-(void)_handleFailure:(id)arg0 serverDialogDictionary:(id)arg1 ;
-(void)_logResultsForSuccess:(BOOL)arg0 failureReason:(id)arg1 failureMessage:(id)arg2 error:(id)arg3 ;
-(void)main;
-(void)operation:(id)arg0 selectedButton:(id)arg1 ;


@end


#endif