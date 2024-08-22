// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNQUICKCONTACTACTION_H
#define CNQUICKCONTACTACTION_H

@class NSString;
@protocol CNContactActionDelegate, CNQuickContactActionDelegate;


#import "CNQuickAction.h"
#import "CNContactAction.h"

@interface CNQuickContactAction : CNQuickAction <CNContactActionDelegate>



@property (copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (retain, nonatomic) CNContactAction *contactAction; // ivar: _contactAction
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNQuickContactActionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)contactViewCache;
-(id)initWithContactAction:(id)arg0 ;
-(void)action:(id)arg0 dismissViewController:(id)arg1 sender:(id)arg2 ;
-(void)action:(id)arg0 prepareChildContactViewController:(id)arg1 sender:(id)arg2 ;
-(void)action:(id)arg0 presentViewController:(id)arg1 sender:(id)arg2 ;
-(void)action:(id)arg0 pushViewController:(id)arg1 sender:(id)arg2 ;
-(void)actionDidFinish:(id)arg0 ;
-(void)actionDidUpdate:(id)arg0 ;
-(void)actionWasCanceled:(id)arg0 ;
-(void)performWithCompletionBlock:(id)arg0 ;


@end


#endif