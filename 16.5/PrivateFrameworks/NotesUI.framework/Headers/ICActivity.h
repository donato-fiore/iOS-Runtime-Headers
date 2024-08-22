// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICACTIVITY_H
#define ICACTIVITY_H

@class UIActivity;
@protocol UIPopoverPresentationControllerSourceItem;



@interface ICActivity : UIActivity

@property (nonatomic) NSInteger contextPathEnum; // ivar: _contextPathEnum
@property (copy, nonatomic) id *performActivityBlock; // ivar: _performActivityBlock
@property (retain, nonatomic) NSObject<UIPopoverPresentationControllerSourceItem> *presentationSourceItem; // ivar: _presentationSourceItem


-(id)actionIdentifier;
-(id)actionWithCompletion:(id)arg0 ;
-(id)init;
-(id)initWithPerformActivity:(id)arg0 ;
-(id)menuWithCompletion:(id)arg0 ;
-(void)commonInit;
-(void)performActivityWithCompletion:(id)arg0 ;


@end


#endif