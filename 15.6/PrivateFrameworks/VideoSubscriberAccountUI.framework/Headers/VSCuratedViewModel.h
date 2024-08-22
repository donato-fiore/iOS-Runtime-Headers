// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VSCURATEDVIEWMODEL_H
#define VSCURATEDVIEWMODEL_H

@class NSString, VSOptional, UIImage, NSItemProvider;
@protocol VSLogoImageViewModel;


#import "VSViewModel.h"

@interface VSCuratedViewModel : VSViewModel <VSLogoImageViewModel>



@property (nonatomic, getter=isBeginValidationButtonEnabled) BOOL beginValidationButtonEnabled; // ivar: _beginValidationButtonEnabled
@property (copy, nonatomic) NSString *beginValidationButtonTitle; // ivar: _beginValidationButtonTitle
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *footerText; // ivar: _footerText
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) VSOptional *identityProviderDisplayName; // ivar: _identityProviderDisplayName
@property (retain, nonatomic) UIImage *logo; // ivar: _logo
@property (copy, nonatomic) NSString *logoAccessibilityLabel; // ivar: _logoAccessibilityLabel
@property (retain, nonatomic) NSItemProvider *logoProvider; // ivar: _logoProvider
@property (copy, nonatomic) NSString *message; // ivar: _message
@property (copy, nonatomic) NSString *notice; // ivar: _notice
@property (nonatomic) BOOL showFooter; // ivar: _showFooter
@property (readonly) Class superclass;


-(id)init;
-(void)configureWithRequest:(id)arg0 ;


@end


#endif