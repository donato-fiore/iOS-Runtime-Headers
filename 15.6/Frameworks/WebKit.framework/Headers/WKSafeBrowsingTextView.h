// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WKSAFEBROWSINGTEXTVIEW_H
#define WKSAFEBROWSINGTEXTVIEW_H

@class UITextView;



@interface WKSafeBrowsingTextView : UITextView {
    WeakObjCPtr<WKSafeBrowsingWarning> _warning;
}




-(id)initWithAttributedString:(id)arg0 forWarning:(id)arg1 ;
-(struct CGSize )intrinsicContentSize;


@end


#endif