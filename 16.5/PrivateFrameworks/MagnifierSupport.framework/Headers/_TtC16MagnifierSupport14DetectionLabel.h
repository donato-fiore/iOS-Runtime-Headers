// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC16MAGNIFIERSUPPORT14DETECTIONLABEL_H
#define _TTC16MAGNIFIERSUPPORT14DETECTIONLABEL_H

@class UITextView;



@interface _TtC16MagnifierSupport14DetectionLabel : UITextView {
    ? kSideInset;
    ? peopleDetectionText;
    ? doorDetectionText;
}


@property (nonatomic, readonly) BOOL canBecomeFirstResponder;
@property (nonatomic) CGSize contentSize;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 textContainer:(id)arg1 ;


@end


#endif