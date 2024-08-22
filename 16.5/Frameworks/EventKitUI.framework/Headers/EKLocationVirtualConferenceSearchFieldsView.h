// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKLOCATIONVIRTUALCONFERENCESEARCHFIELDSVIEW_H
#define EKLOCATIONVIRTUALCONFERENCESEARCHFIELDSVIEW_H

@class UIView, NSString, UITextField;
@protocol UITextFieldDelegate, EKLocationVirtualConferenceSearchFieldsDelegate;



@interface EKLocationVirtualConferenceSearchFieldsView : UIView <UITextFieldDelegate>

 {
    UIView *_hairline;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<EKLocationVirtualConferenceSearchFieldsDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableConferenceTextField; // ivar: _disableConferenceTextField
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UITextField *locationTextField; // ivar: _locationTextField
@property (readonly, nonatomic) CGFloat preferredHeight;
@property (retain, nonatomic) UITextField *selectedTextField; // ivar: _selectedTextField
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITextField *virtualConferenceTextField; // ivar: _virtualConferenceTextField


-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(id)_newTextFieldWithLeftViewText:(id)arg0 imageName:(id)arg1 ;
-(id)conferenceLabelImageName;
-(id)conferenceLabelText;
-(id)init;
-(id)locationLabelImageName;
-(id)locationLabelText;
-(void)textFieldDidBeginEditing:(id)arg0 ;
-(void)textFieldDidChange:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateLeftViewForTextField:(id)arg0 withText:(id)arg1 imageName:(id)arg2 ;


@end


#endif