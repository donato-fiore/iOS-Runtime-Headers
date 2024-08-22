// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC18HEALTHEXPERIENCEUI30TEXTVIEWCOLLECTIONREUSABLEVIEW_H
#define _TTC18HEALTHEXPERIENCEUI30TEXTVIEWCOLLECTIONREUSABLEVIEW_H

@class UICollectionViewCell;
@protocol UITextViewDelegate;



@interface _TtC18HealthExperienceUI30TextViewCollectionReusableView : UICollectionViewCell <UITextViewDelegate>

 {
    ? parentViewController;
    ? item;
    ? textView;
}




-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif