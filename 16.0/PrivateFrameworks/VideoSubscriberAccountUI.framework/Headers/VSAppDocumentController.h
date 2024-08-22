// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VSAPPDOCUMENTCONTROLLER_H
#define VSAPPDOCUMENTCONTROLLER_H

@class IKAppDocument, NSString, IKViewElement, NSError;
@protocol IKAppDocumentDelegate, VSAppDocumentControllerDelegate;

#import <Foundation/Foundation.h>

#import "VSViewModel.h"

@interface VSAppDocumentController : NSObject <IKAppDocumentDelegate>



@property (retain, nonatomic) IKAppDocument *appDocument; // ivar: _appDocument
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<VSAppDocumentControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) IKViewElement *templateElement; // ivar: _templateElement
@property (retain, nonatomic) VSViewModel *viewModel; // ivar: _viewModel
@property (retain, nonatomic) NSError *viewModelError; // ivar: _viewModelError


-(BOOL)_updateViewModel:(id)arg0 WithError:(*id)arg1 ;
-(BOOL)document:(id)arg0 evaluateStyleMediaQuery:(id)arg1 ;
-(id)_imageItemProviderWithImageElement:(id)arg0 ;
-(id)_newViewModel;
-(id)init;
-(id)initWithAppDocument:(id)arg0 ;
-(void)_notiftyDidFailToUpdateViewModelWithError:(id)arg0 ;
-(void)_notiftyDidUpdateViewModel:(id)arg0 ;
-(void)_startObservingViewModel:(id)arg0 ;
-(void)_stopObservingViewModel:(id)arg0 ;
-(void)dealloc;
-(void)documentDidUpdate:(id)arg0 ;
-(void)documentNeedsUpdate:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)userInterfaceStyleDidUpdate;


@end


#endif