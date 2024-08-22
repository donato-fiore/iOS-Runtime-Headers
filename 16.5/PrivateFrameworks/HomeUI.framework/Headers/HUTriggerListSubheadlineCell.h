// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUTRIGGERLISTSUBHEADLINECELL_H
#define HUTRIGGERLISTSUBHEADLINECELL_H

@class UITableViewCell, NSArray, NSString, UITextView, HFItem;
@protocol UITextViewDelegate, HUCellProtocol, HUTriggerListSubheadlineCellDelegate, HUResizableCellDelegate;


#import "HUGridLayoutOptions.h"

@interface HUTriggerListSubheadlineCell : UITableViewCell <UITextViewDelegate, HUCellProtocol>



@property (retain, nonatomic) NSArray *constraints; // ivar: _constraints
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUTriggerListSubheadlineCellDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UITextView *descriptionView; // ivar: _descriptionView
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HFItem *item; // ivar: _item
@property (retain, nonatomic) HUGridLayoutOptions *layoutOptions; // ivar: _layoutOptions
@property (weak, nonatomic) NSObject<HUResizableCellDelegate> *resizingDelegate;
@property (nonatomic) BOOL respectLayoutMargins; // ivar: _respectLayoutMargins
@property (readonly) Class superclass;


-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)prepareForReuse;
-(void)updateConstraints;
-(void)updateUIWithAnimation:(BOOL)arg0 ;
-(void)updateUIWithDescription:(id)arg0 ;
-(void)updateUIWithResults:(id)arg0 animation:(BOOL)arg1 ;


@end


#endif