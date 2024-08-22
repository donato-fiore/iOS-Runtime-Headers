// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC7SWIFTUI30UIKITRICHTEXTEDITORCOORDINATOR_H
#define _TTC7SWIFTUI30UIKITRICHTEXTEDITORCOORDINATOR_H

@class TtC7SwiftUI30UIKitTextEditorCoordinatorBase;
@protocol UITextViewDelegate;



@interface _TtC7SwiftUI30UIKitRichTextEditorCoordinator : TtC7SwiftUI30UIKitTextEditorCoordinatorBase <UITextViewDelegate>

 {
    ? configuration;
    ? textStorage;
    ? textContentStorage;
    ? attributeResolver;
}




-(id)init;
-(void)textViewDidChange:(id)arg0 ;


@end


#endif