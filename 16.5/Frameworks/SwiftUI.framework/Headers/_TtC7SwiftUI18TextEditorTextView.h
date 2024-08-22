// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC7SWIFTUI18TEXTEDITORTEXTVIEW_H
#define _TTC7SWIFTUI18TEXTEDITORTEXTVIEW_H

@class TtC7SwiftUI13UIKitTextView;



@interface _TtC7SwiftUI18TextEditorTextView : TtC7SwiftUI13UIKitTextView {
    ? findContext;
}




-(BOOL)supportsTextReplacement;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 textContainer:(id)arg1 ;
-(void)findInteraction:(id)arg0 didBeginFindSession:(id)arg1 ;
-(void)findInteraction:(id)arg0 didEndFindSession:(id)arg1 ;


@end


#endif