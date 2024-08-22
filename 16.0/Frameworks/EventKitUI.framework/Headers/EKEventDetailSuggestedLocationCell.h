// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKEVENTDETAILSUGGESTEDLOCATIONCELL_H
#define EKEVENTDETAILSUGGESTEDLOCATIONCELL_H

@class UITableViewCell, EKEvent, EKStructuredLocation, UIView<SGBannerProtocol>, UIView;
@protocol EKEventDetailSuggestedLocationCellDelegate;



@interface EKEventDetailSuggestedLocationCell : UITableViewCell {
    EKEvent *_event;
    EKStructuredLocation *_location;
}


@property (retain, nonatomic) UIView<SGBannerProtocol> *banner; // ivar: _banner
@property (readonly, nonatomic) CGRect bannerPopoverSourceRect;
@property (readonly, nonatomic) UIView *bannerView;
@property (weak, nonatomic) NSObject<EKEventDetailSuggestedLocationCellDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL inlineStyle; // ivar: _inlineStyle


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithInlineStyle:(BOOL)arg0 ;
-(void)_disambiguateIfNeeded;
-(void)_setEventDate:(id)arg0 ;
-(void)addAction;
-(void)commonInit;
-(void)dismissAction;
-(void)setEvent:(id)arg0 ;


@end


#endif