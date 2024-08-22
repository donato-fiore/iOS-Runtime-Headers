// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUABOUTRESIDENTDEVICEFOOTERVIEW_H
#define HUABOUTRESIDENTDEVICEFOOTERVIEW_H

@class UITableViewHeaderFooterView, NSMutableArray, NSString, UITextView;
@protocol UITextViewDelegate, HUAboutResidentDeviceFooterViewDelegate;



@interface HUAboutResidentDeviceFooterView : UITableViewHeaderFooterView <UITextViewDelegate>



@property (retain, nonatomic) NSMutableArray *constraints; // ivar: _constraints
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUAboutResidentDeviceFooterViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) UIEdgeInsets messageInsets; // ivar: _messageInsets
@property (retain, nonatomic) UITextView *messageView; // ivar: _messageView
@property (readonly) Class superclass;


-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(id)_linkTextAttributes;
-(id)_textAttributes;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithReuseIdentifier:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_setupViews;
-(void)updateConstraints;


@end


#endif