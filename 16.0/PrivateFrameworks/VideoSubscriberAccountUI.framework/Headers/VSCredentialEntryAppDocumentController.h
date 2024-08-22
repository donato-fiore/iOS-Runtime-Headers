// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VSCREDENTIALENTRYAPPDOCUMENTCONTROLLER_H
#define VSCREDENTIALENTRYAPPDOCUMENTCONTROLLER_H

@class NSArray, NSString;
@protocol VSCredentialEntryViewModelDelegate, VSIKItemGroupDelegate;


#import "VSAppDocumentController.h"
#import "VSIKItemGroupElement.h"

@interface VSCredentialEntryAppDocumentController : VSAppDocumentController <VSCredentialEntryViewModelDelegate, VSIKItemGroupDelegate>



@property (retain, nonatomic) NSArray *buttonElements; // ivar: _buttonElements
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) VSIKItemGroupElement *pickerElement; // ivar: _pickerElement
@property (readonly) Class superclass;


-(BOOL)_updateCredentialEntryViewModel:(id)arg0 error:(*id)arg1 ;
-(BOOL)_updateCredentialEntryViewModel:(id)arg0 withTemplate:(id)arg1 error:(*id)arg2 ;
-(BOOL)_updateViewModel:(id)arg0 error:(*id)arg1 ;
-(id)_credentialEntryViewModelWithViewModel:(id)arg0 ;
-(id)_newViewModel;
-(void)_startObservingViewModel:(id)arg0 ;
-(void)_stopObservingViewModel:(id)arg0 ;
-(void)itemGroup:(id)arg0 selectedItemIndexDidChange:(NSInteger)arg1 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)viewModel:(id)arg0 buttonTappedAtIndex:(NSUInteger)arg1 ;
-(void)viewModel:(id)arg0 pickerDidSelectRow:(NSUInteger)arg1 ;


@end


#endif