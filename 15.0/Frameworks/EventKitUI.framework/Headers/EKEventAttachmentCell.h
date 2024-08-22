// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKEVENTATTACHMENTCELL_H
#define EKEVENTATTACHMENTCELL_H

@class UITableViewCell, UIActivityIndicatorView;



@interface EKEventAttachmentCell : UITableViewCell {
    UIActivityIndicatorView *_activityIndicator;
}




-(id)_iconForDocumentProxy:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)setAttachment:(id)arg0 ;
-(void)showSpinner:(BOOL)arg0 ;


@end


#endif