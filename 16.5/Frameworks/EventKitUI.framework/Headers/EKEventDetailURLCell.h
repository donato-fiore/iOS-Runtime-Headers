// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKEVENTDETAILURLCELL_H
#define EKEVENTDETAILURLCELL_H

@class UILabel, UITextView, NSURL, SGSuggestedEventLaunchInfo, NSString;
@protocol UITextViewDelegate;


#import "EKEventDetailCell.h"

@interface EKEventDetailURLCell : EKEventDetailCell <UITextViewDelegate>

 {
    UILabel *_URLTitleView;
    UITextView *_URLView;
    int _lastLayoutPosition;
    NSURL *_url;
    SGSuggestedEventLaunchInfo *_launchInfo;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(Class)_SGSuggestionsServiceClass;
-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(BOOL)update;
-(BOOL)updateLink;
-(id)_URLTitleView;
-(id)_URLView;
-(id)initWithEvent:(id)arg0 launchInfo:(id)arg1 editable:(BOOL)arg2 style:(NSInteger)arg3 ;
-(id)initWithEvent:(id)arg0 url:(id)arg1 editable:(BOOL)arg2 style:(NSInteger)arg3 ;
-(void)_layoutForWidth:(CGFloat)arg0 position:(int)arg1 ;
-(void)layoutForWidth:(CGFloat)arg0 position:(int)arg1 ;
-(void)layoutSubviews;
-(void)updateLinkWithLaunchInfo;
-(void)updateLinkWithURL;
-(void)updateWithURL:(id)arg0 launchInfo:(id)arg1 ;


@end


#endif