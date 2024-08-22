// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MFMAILCOMPOSEPLACEHOLDERVIEW_H
#define _MFMAILCOMPOSEPLACEHOLDERVIEW_H

@class UIScrollView;


#import "MFMailComposeHeaderView.h"
#import "MFComposeSubjectView.h"

@interface _MFMailComposePlaceholderView : UIScrollView {
    MFMailComposeHeaderView *_toField;
    MFMailComposeHeaderView *_multiView;
    MFComposeSubjectView *_subjectView;
}




-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)setSubject:(id)arg0 ;


@end


#endif