// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIFONTPICKERVIEWCONTROLLER_H
#define UIFONTPICKERVIEWCONTROLLER_H

@class NSString, NSExtension, UIFontDescriptor;
@protocol _UIFontPickerRemoteViewControllerHost, _UIRemoteViewControllerContaining, UIFontPicker, UIFontPickerViewControllerDelegate, NSCopying;


#import "UIViewController.h"
#import "_UIFontPickerRemoteViewController.h"
#import "_UIRemoteViewController.h"
#import "UIFontPickerViewControllerConfiguration.h"

@interface UIFontPickerViewController : UIViewController <_UIFontPickerRemoteViewControllerHost, _UIRemoteViewControllerContaining, UIFontPicker>

 {
    BOOL _presentingViewController;
    _UIFontPickerRemoteViewController *_childViewController;
}


@property (readonly, nonatomic) _UIRemoteViewController *_containedRemoteViewController;
@property (readonly, copy, nonatomic) UIFontPickerViewControllerConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<UIFontPickerViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSExtension *extension; // ivar: _extension
@property (copy, nonatomic) NSObject<NSCopying> *extensionRequestIdentifier; // ivar: _extensionRequestIdentifier
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIFontDescriptor *selectedFontDescriptor; // ivar: _selectedFontDescriptor
@property (readonly) Class superclass;


-(id)_initWithCompletion:(id)arg0 ;
-(id)_initWithMode:(NSUInteger)arg0 hideSearchBar:(BOOL)arg1 tintColor:(id)arg2 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 ;
-(id)initWithMode:(NSUInteger)arg0 ;
-(id)initWithSelectedFont:(id)arg0 inMode:(NSUInteger)arg1 ;
-(id)remoteViewController;
-(void)_commonInitWithCompletion:(id)arg0 ;
-(void)_pickerDidCancel;
-(void)_pickerDidSelectFont:(id)arg0 ;
-(void)_setChildViewController:(id)arg0 ;
-(void)_viewControllerPresentationDidInitiate;
-(void)dealloc;
-(void)dismissViewControllerWithTransition:(int)arg0 completion:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)invalidate;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif