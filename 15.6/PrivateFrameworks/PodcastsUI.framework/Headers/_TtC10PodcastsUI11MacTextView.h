// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC10PODCASTSUI11MACTEXTVIEW_H
#define _TTC10PODCASTSUI11MACTEXTVIEW_H

@class UITextView, UIBezierPath, NSString;



@interface _TtC10PodcastsUI11MacTextView : UITextView

@property (nonatomic, retain) UIBezierPath *accessibilityPath;
@property (nonatomic, copy) NSString *text;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 textContainer:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif