// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXCNCOMPOSERECIPIENTVIEW_H
#define PXCNCOMPOSERECIPIENTVIEW_H

@class CNComposeRecipientTextView, NSMutableArray, NSString;
@protocol CNComposeRecipientTextViewDelegate;


#import "PXComposeRecipientView.h"

@interface PXCNComposeRecipientView : PXComposeRecipientView <CNComposeRecipientTextViewDelegate>

 {
    CNComposeRecipientTextView *_recipientTextView;
    CGSize _preferredSize;
    NSMutableArray *_internalRecipients;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)becomeFirstResponder;
-(BOOL)resignFirstResponder;
-(NSInteger)maxRecipients;
-(id)addButton;
-(id)composeRecipientView:(id)arg0 composeRecipientForAddress:(id)arg1 ;
-(id)init;
-(id)label;
-(id)recipients;
-(id)text;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)addRecipient:(id)arg0 ;
-(void)addRecipients:(id)arg0 ;
-(void)composeHeaderView:(id)arg0 didChangeSize:(struct CGSize )arg1 ;
-(void)composeRecipientView:(id)arg0 didAddRecipient:(id)arg1 ;
-(void)composeRecipientView:(id)arg0 didFinishEnteringAddress:(id)arg1 ;
-(void)composeRecipientView:(id)arg0 didRemoveRecipient:(id)arg1 ;
-(void)composeRecipientView:(id)arg0 disambiguateRecipientForAtom:(id)arg1 ;
-(void)composeRecipientView:(id)arg0 textDidChange:(id)arg1 ;
-(void)composeRecipientViewDidFinishPickingRecipient:(id)arg0 ;
-(void)composeRecipientViewRequestAddRecipient:(id)arg0 ;
-(void)layoutSubviews;
-(void)removeRecipient:(id)arg0 ;
-(void)removeRecipients:(id)arg0 ;
-(void)setLabel:(id)arg0 ;
-(void)setMaxRecipients:(NSInteger)arg0 ;
-(void)setSeparatorHidden:(BOOL)arg0 ;
-(void)setText:(id)arg0 ;


@end


#endif