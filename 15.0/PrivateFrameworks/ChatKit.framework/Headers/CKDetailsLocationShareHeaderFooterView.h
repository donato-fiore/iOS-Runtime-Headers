// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDETAILSLOCATIONSHAREHEADERFOOTERVIEW_H
#define CKDETAILSLOCATIONSHAREHEADERFOOTERVIEW_H

@class UITableViewHeaderFooterView, NSString, UITextView;
@protocol CKDetailsHeaderFooterView;



@interface CKDetailsLocationShareHeaderFooterView : UITableViewHeaderFooterView <CKDetailsHeaderFooterView>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UITextView *locationSharingTextView; // ivar: _locationSharingTextView
@property (readonly) Class superclass;


+(id)reuseIdentifier;
-(void)layoutSubviews;


@end


#endif