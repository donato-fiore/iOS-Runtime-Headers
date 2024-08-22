// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC11APPSTOREKIT19DYNAMICTYPETEXTVIEW_H
#define _TTC11APPSTOREKIT19DYNAMICTYPETEXTVIEW_H

@class UITextView, UIFont;



@interface _TtC11AppStoreKit19DynamicTypeTextView : UITextView {
    ? fontUseCase;
}


@property (nonatomic, retain) UIFont *font;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 textContainer:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif