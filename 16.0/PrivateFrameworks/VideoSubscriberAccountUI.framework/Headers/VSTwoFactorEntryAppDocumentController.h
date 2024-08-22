// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VSTWOFACTORENTRYAPPDOCUMENTCONTROLLER_H
#define VSTWOFACTORENTRYAPPDOCUMENTCONTROLLER_H

@class NSMutableArray, NSString;
@protocol VSTwoFactorEntryViewModelDelegate;


#import "VSAppDocumentController.h"

@interface VSTwoFactorEntryAppDocumentController : VSAppDocumentController <VSTwoFactorEntryViewModelDelegate>



@property (retain, nonatomic) NSMutableArray *buttonElements; // ivar: _buttonElements
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_updateTwoFactorEntryViewModel:(id)arg0 withTemplate:(id)arg1 error:(*id)arg2 ;
-(BOOL)_updateViewModel:(id)arg0 error:(*id)arg1 ;
-(id)_newViewModel;
-(void)_startObservingViewModel:(id)arg0 ;
-(void)_stopObservingViewModel:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)twoFactorEntryViewModel:(id)arg0 didPressButtonAtIndex:(NSUInteger)arg1 ;


@end


#endif