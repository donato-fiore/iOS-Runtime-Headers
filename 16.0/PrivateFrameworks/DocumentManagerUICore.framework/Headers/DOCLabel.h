// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DOCLABEL_H
#define DOCLABEL_H

@class UILabel, NSNumber;
@protocol DOCLabelSizing;



@interface DOCLabel : UILabel <DOCLabelSizing>

 {
    NSNumber *useAttributedTextNumber;
    BOOL _intrinsicContentSizeShortcutDisabled;
}


@property (readonly) CGSize doc_effectiveContentSize;


-(BOOL)_useShortcutIntrinsicContentSize;
-(void)setAttributedText:(id)arg0 ;
-(void)setText:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif