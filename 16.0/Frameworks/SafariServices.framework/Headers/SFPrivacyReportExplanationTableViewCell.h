// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFPRIVACYREPORTEXPLANATIONTABLEVIEWCELL_H
#define SFPRIVACYREPORTEXPLANATIONTABLEVIEWCELL_H

@class UITableViewCell, UITextView, NSString;
@protocol UITextViewDelegate, SFPrivacyReportExplanationTableViewCellDelegate;



@interface SFPrivacyReportExplanationTableViewCell : UITableViewCell <UITextViewDelegate>

 {
    UITextView *_textLabel;
    BOOL _wideLayout;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SFPrivacyReportExplanationTableViewCellDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isExpanded) BOOL expanded; // ivar: _expanded
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(struct CGRect )_separatorFrame;
-(void)_toggleExpanded:(id)arg0 ;
-(void)privacyProxyStateChanged:(id)arg0 ;


@end


#endif