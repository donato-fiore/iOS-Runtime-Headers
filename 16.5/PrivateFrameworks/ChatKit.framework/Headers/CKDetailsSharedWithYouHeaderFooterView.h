// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDETAILSSHAREDWITHYOUHEADERFOOTERVIEW_H
#define CKDETAILSSHAREDWITHYOUHEADERFOOTERVIEW_H

@class UITableViewHeaderFooterView, NSString, UITextView;
@protocol CKDetailsHeaderFooterView;



@interface CKDetailsSharedWithYouHeaderFooterView : UITableViewHeaderFooterView <CKDetailsHeaderFooterView>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UITextView *sharedWithYouTextView; // ivar: _sharedWithYouTextView
@property (readonly) Class superclass;


+(id)reuseIdentifier;
-(void)layoutSubviews;


@end


#endif