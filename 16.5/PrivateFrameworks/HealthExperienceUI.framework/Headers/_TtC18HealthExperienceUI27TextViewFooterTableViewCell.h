// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC18HEALTHEXPERIENCEUI27TEXTVIEWFOOTERTABLEVIEWCELL_H
#define _TTC18HEALTHEXPERIENCEUI27TEXTVIEWFOOTERTABLEVIEWCELL_H

@class UITableViewCell;
@protocol UITextViewDelegate;



@interface _TtC18HealthExperienceUI27TextViewFooterTableViewCell : UITableViewCell <UITextViewDelegate>

 {
    ? parentViewController;
    ? item;
    ? textView;
}




-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;


@end


#endif