// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFPRIVACYREPORTBANNERCELL_H
#define SFPRIVACYREPORTBANNERCELL_H



#import "SFInteractiveBannerCell.h"

@interface SFPrivacyReportBannerCell : SFInteractiveBannerCell {
    NSUInteger _action;
}


@property (nonatomic) NSInteger numberOfTrackers; // ivar: _numberOfTrackers


+(id)reuseIdentifier;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_privacyProxyAvailabilityChanged:(id)arg0 ;
-(void)_setAction:(NSUInteger)arg0 text:(id)arg1 ;
-(void)_updateState;
-(void)setModel:(id)arg0 ;


@end


#endif