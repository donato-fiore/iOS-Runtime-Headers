// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFCOMPOSEFROMVIEW_H
#define MFCOMPOSEFROMVIEW_H

@class NSArray, NSString, NSString<ECEmailAddressConvertible>;
@protocol MFPopupButtonDelegate, MFComposeFromViewDelegate;


#import "MFMailComposeHeaderView.h"
#import "MFPopupButton.h"

@interface MFComposeFromView : MFMailComposeHeaderView <MFPopupButtonDelegate>



@property (retain, nonatomic) NSArray *availableAddresses;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MFComposeFromViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MFPopupButton *popupButton; // ivar: _popupButton
@property (copy, nonatomic) NSString<ECEmailAddressConvertible> *selectedAddress;
@property (readonly) Class superclass;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)popupButton:(id)arg0 didSelectItem:(id)arg1 ;
-(void)popupButtonWillPresentMenu:(id)arg0 animator:(id)arg1 ;
-(void)refreshPreferredContentSize;


@end


#endif