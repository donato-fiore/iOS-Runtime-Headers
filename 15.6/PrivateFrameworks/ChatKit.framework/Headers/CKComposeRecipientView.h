// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKCOMPOSERECIPIENTVIEW_H
#define CKCOMPOSERECIPIENTVIEW_H

@class CNComposeRecipientTextView;
@protocol CKComposeRecipientViewDelegate;



@interface CKComposeRecipientView : CNComposeRecipientTextView

@property (weak, nonatomic) NSObject<CKComposeRecipientViewDelegate> *layoutDelegate; // ivar: layoutDelegate


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct UIEdgeInsets )layoutMargins;
-(struct UIEdgeInsets )safeAreaInsets;
-(void)atomTextViewDidBecomeFirstResponder:(id)arg0 ;
-(void)reset;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif