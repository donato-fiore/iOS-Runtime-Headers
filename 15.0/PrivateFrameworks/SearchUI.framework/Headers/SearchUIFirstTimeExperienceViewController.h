// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SEARCHUIFIRSTTIMEEXPERIENCEVIEWCONTROLLER_H
#define SEARCHUIFIRSTTIMEEXPERIENCEVIEWCONTROLLER_H

@class UIViewController, NSString, NSArray;
@protocol UITextViewDelegate, SearchUIFirstTimeExperienceDelegate;



@interface SearchUIFirstTimeExperienceViewController : UIViewController <UITextViewDelegate>



@property (retain, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (retain, nonatomic) NSString *continueButtonTitle; // ivar: _continueButtonTitle
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SearchUIFirstTimeExperienceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *explanationText; // ivar: _explanationText
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *learnMoreText; // ivar: _learnMoreText
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *supportedDomains; // ivar: _supportedDomains


-(BOOL)_canShowWhileLocked;
-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(id)initWithDomains:(id)arg0 explanationText:(id)arg1 learnMoreText:(id)arg2 continueButtonTitle:(id)arg3 ;
-(id)initWithStyle:(NSUInteger)arg0 supportedDomains:(NSUInteger)arg1 explanationText:(id)arg2 learnMoreText:(id)arg3 continueButtonTitle:(id)arg4 ;
-(id)initWithSupportedDomains:(NSUInteger)arg0 explanationText:(id)arg1 learnMoreText:(id)arg2 continueButtonTitle:(id)arg3 ;
-(void)continueButtonPressed;
-(void)makeViews;
-(void)showPrivacyView;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif