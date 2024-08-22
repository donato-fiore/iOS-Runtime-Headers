// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFPRIVACYREPORTPRIVACYPROXYTIPTABLEVIEWCELL_H
#define SFPRIVACYREPORTPRIVACYPROXYTIPTABLEVIEWCELL_H

@class UITableViewCell, NSLayoutConstraint;
@protocol SFPrivacyReportPrivacyProxyTipTableViewCellDelegate;



@interface SFPrivacyReportPrivacyProxyTipTableViewCell : UITableViewCell {
    NSLayoutConstraint *_insetLeading;
    NSLayoutConstraint *_insetTrailing;
}


@property (weak, nonatomic) NSObject<SFPrivacyReportPrivacyProxyTipTableViewCellDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL usesInsetStyle; // ivar: _usesInsetStyle


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_createContentViews;
-(void)_dismiss:(id)arg0 ;
-(void)_learnMore:(id)arg0 ;
-(void)_notifyDelegateOfStateChange;
-(void)_setPrivacyProxyStateToTrackers:(id)arg0 ;
-(void)_setPrivacyProxyStateToTrackersAndWebsites:(id)arg0 ;
-(void)_turnOnCrossSiteTrackingProtectionIfNeeded;
-(void)prepareForReuse;


@end


#endif