// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPASSPERSONALIZATIONCELL_H
#define PKPASSPERSONALIZATIONCELL_H

@class UITableViewCell, PKContact, NSString;
@protocol UITextFieldDelegate, PKPassPersonalizationCellDelegate;


#import "PKPassPersonalizationCellContext.h"

@interface PKPassPersonalizationCell : UITableViewCell <UITextFieldDelegate>



@property (readonly, nonatomic) PKContact *contact; // ivar: _contact
@property (readonly, nonatomic) PKPassPersonalizationCellContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKPassPersonalizationCellDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(CGFloat)minimumCellHeight;
+(CGFloat)textLabelWidthForText:(id)arg0 ;
+(id)_textFieldFont;
+(id)_textLabelFont;
-(BOOL)becomeFirstResponder;
-(BOOL)textFieldShouldBeginEditing:(id)arg0 ;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_editableTextFieldChanged:(id)arg0 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif