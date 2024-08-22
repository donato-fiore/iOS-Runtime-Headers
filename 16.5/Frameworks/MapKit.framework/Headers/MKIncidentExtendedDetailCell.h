// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKINCIDENTEXTENDEDDETAILCELL_H
#define MKINCIDENTEXTENDEDDETAILCELL_H

@class UIStackView, UIImageView, GEOComposedRouteAdvisoryItem, NSString;
@protocol UITextViewDelegate;


#import "MKTableViewCell.h"

@interface MKIncidentExtendedDetailCell : MKTableViewCell <UITextViewDelegate>

 {
    UIStackView *_stackView;
    UIImageView *_imageView;
    GEOComposedRouteAdvisoryItem *_advisoryItem;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(id)customBodyTextView;
-(id)initWithReuseIdentifier:(id)arg0 ;
-(void)_setConstraints;
-(void)configureWithAdvisoryItem:(id)arg0 ;


@end


#endif