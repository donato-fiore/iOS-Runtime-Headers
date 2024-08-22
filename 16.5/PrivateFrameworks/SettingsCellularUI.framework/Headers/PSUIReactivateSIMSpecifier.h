// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSUIREACTIVATESIMSPECIFIER_H
#define PSUIREACTIVATESIMSPECIFIER_H

@class PSSpecifier, NSString, PSListController, UIActivityIndicatorView;
@protocol PSUIReActivateSIMSpecifierModelDelegate;



@interface PSUIReactivateSIMSpecifier : PSSpecifier <PSUIReActivateSIMSpecifierModelDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak) PSListController *hostController; // ivar: _hostController
@property (retain) id *originAccessoryView; // ivar: _originAccessoryView
@property (retain) id *planItem; // ivar: _planItem
@property (retain) UIActivityIndicatorView *spinner; // ivar: _spinner
@property (readonly) Class superclass;


-(id)getLogger;
-(id)initWithPlanUniversalReference:(id)arg0 hostController:(id)arg1 ;
-(void)_activateSIMPressed:(id)arg0 ;
-(void)_hideSpinner;
-(void)_showSpinner;
-(void)setProperty:(id)arg0 forKey:(id)arg1 ;
-(void)transferBackCanceled:(id)arg0 ;
-(void)transferBackFailed:(id)arg0 error:(id)arg1 ;
-(void)transferBackSuccessFrom:(id)arg0 to:(id)arg1 ;


@end


#endif