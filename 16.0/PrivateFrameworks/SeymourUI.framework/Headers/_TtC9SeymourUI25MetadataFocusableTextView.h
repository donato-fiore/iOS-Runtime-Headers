// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC9SEYMOURUI25METADATAFOCUSABLETEXTVIEW_H
#define _TTC9SEYMOURUI25METADATAFOCUSABLETEXTVIEW_H

@class UIView, NSArray;



@interface _TtC9SeymourUI25MetadataFocusableTextView : UIView {
    ? onEntryTapped;
    ? textView;
    ? textViewHeightConstraint;
    ? layout;
    ? lastWidth;
}


@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif