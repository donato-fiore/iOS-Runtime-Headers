// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HRATRIALFIBRILLATIONDATATYPEDESCRIPTIONCELL_H
#define HRATRIALFIBRILLATIONDATATYPEDESCRIPTIONCELL_H

@class UITableViewCell, NSArray, NSString, UITextView, HKAttributionTextView;
@protocol UITextViewDelegate;



@interface HRAtrialFibrillationDataTypeDescriptionCell : UITableViewCell <UITextViewDelegate>



@property (retain, nonatomic) NSArray *availableVerticalConstraints; // ivar: _availableVerticalConstraints
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UITextView *descriptionTextView; // ivar: _descriptionTextView
@property (nonatomic) BOOL featureAvailable; // ivar: _featureAvailable
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UITextView *settingsDescriptionTextView; // ivar: _settingsDescriptionTextView
@property (retain, nonatomic) HKAttributionTextView *settingsLinkTextView; // ivar: _settingsLinkTextView
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *unavailableVerticalConstraints; // ivar: _unavailableVerticalConstraints


-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_setupDescriptionTextView;
-(void)_updateTextForDescriptionTextView;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif