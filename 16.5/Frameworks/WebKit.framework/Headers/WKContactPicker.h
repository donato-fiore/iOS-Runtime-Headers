// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WKCONTACTPICKER_H
#define WKCONTACTPICKER_H

@class NSString;
@protocol CNContactPickerDelegate, WKContactPickerDelegate;

#import <Foundation/Foundation.h>


@interface WKContactPicker : NSObject <CNContactPickerDelegate>

 {
    WeakObjCPtr<WKWebView> _webView;
    WeakObjCPtr<id<WKContactPickerDelegate>> _delegate;
    Vector<WebCore::ContactProperty, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> _properties;
    CompletionHandler<void (std::optional<WTF::Vector<WebCore::ContactInfo, 0, WTF::CrashOnOverflow, 16>> &&)> _completionHandler;
    RetainPtr<WKCNContactPickerDelegate> _contactPickerDelegate;
    RetainPtr<CNContactPickerViewController> _contactPickerViewController;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WKContactPickerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_contactsFromJSContacts:(id)arg0 ;
-(id)initWithView:(id)arg0 ;
-(struct ContactInfo )_contactInfoFromCNContact:(id)arg0 ;
-(void)_contactPickerDidDismissWithContactInfo:(*void)arg0 ;
-(void)contactPicker:(id)arg0 didSelectContact:(id)arg1 ;
-(void)contactPicker:(id)arg0 didSelectContacts:(id)arg1 ;
-(void)contactPickerDidCancel:(id)arg0 ;
-(void)dismissWithContacts:(id)arg0 ;
-(void)presentWithRequestData:(*void)arg0 completionHandler:(*void)arg1 ;


@end


#endif