// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BRCAGGREGATEOPERATION_H
#define BRCAGGREGATEOPERATION_H

@class BRCFrameworkOperation, NSArray, NSMutableDictionary, NSString;
@protocol BRCOperationSubclass;



@interface BRCAggregateOperation : BRCFrameworkOperation <BRCOperationSubclass>

 {
    NSArray *_subOperations;
    NSMutableDictionary *_resultDictionary;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) id *wrapperOperationCompletionHandler; // ivar: _wrapperOperationCompletionHandler


-(BOOL)shouldRetryForError:(id)arg0 ;
-(id)initWithSyncContext:(id)arg0 subOperations:(id)arg1 ;
-(void)finishWithResult:(id)arg0 error:(id)arg1 ;
-(void)main;


@end


#endif