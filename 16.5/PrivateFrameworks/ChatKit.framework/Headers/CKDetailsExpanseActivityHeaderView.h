// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDETAILSEXPANSEACTIVITYHEADERVIEW_H
#define CKDETAILSEXPANSEACTIVITYHEADERVIEW_H

@class UITableViewHeaderFooterView, NSString, UITextView;
@protocol CKDetailsHeaderFooterView;



@interface CKDetailsExpanseActivityHeaderView : UITableViewHeaderFooterView <CKDetailsHeaderFooterView>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UITextView *expanseActivityTextView; // ivar: _expanseActivityTextView
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)reuseIdentifier;
-(void)layoutSubviews;


@end


#endif