// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WKFORMINPUTSESSION_H
#define WKFORMINPUTSESSION_H

@class NSString, UIView, NSArray;
@protocol _WKFormInputSession, _WKFocusedElementInfo, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WKFormInputSession : NSObject <_WKFormInputSession>

 {
    WeakObjCPtr<WKContentView> _contentView;
    RetainPtr<WKFocusedElementInfo> _focusedElementInfo;
    RetainPtr<UIView> _customInputView;
    RetainPtr<UIView> _customInputAccessoryView;
    RetainPtr<NSArray<UITextSuggestion *>> _suggestions;
    BOOL _accessoryViewShouldNotShow;
    BOOL _forceSecureTextEntry;
    BOOL _requiresStrongPasswordAssistance;
}


@property (copy, nonatomic) NSString *accessoryViewCustomButtonTitle;
@property (nonatomic) BOOL accessoryViewShouldNotShow;
@property (retain, nonatomic) UIView *customInputAccessoryView;
@property (retain, nonatomic) UIView *customInputView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<_WKFocusedElementInfo> *focusedElementInfo;
@property (nonatomic) BOOL forceSecureTextEntry;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL requiresStrongPasswordAssistance;
@property (copy, nonatomic) NSArray *suggestions;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<NSSecureCoding> *userObject;
@property (readonly, nonatomic, getter=isValid) BOOL valid;


-(id)initWithContentView:(id)arg0 focusedElementInfo:(id)arg1 requiresStrongPasswordAssistance:(BOOL)arg2 ;
-(void)endEditing;
-(void)invalidate;
-(void)reloadFocusedElementContextView;


@end


#endif