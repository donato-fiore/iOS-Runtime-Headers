// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MFMAILRECIPIENTTEXTFIELD_H
#define _MFMAILRECIPIENTTEXTFIELD_H

@class UITextField;



@interface _MFMailRecipientTextField : UITextField

@property (readonly, nonatomic) BOOL isShowingDictationPlaceholder; // ivar: _isShowingDictationPlaceholder


-(id)_previousKeyResponder;
-(id)customOverlayContainer;
-(id)insertDictationResultPlaceholder;
-(void)_handleKeyUIEvent:(id)arg0 ;
-(void)paste:(id)arg0 ;
-(void)removeDictationResultPlaceholder:(id)arg0 willInsertResult:(BOOL)arg1 ;


@end


#endif