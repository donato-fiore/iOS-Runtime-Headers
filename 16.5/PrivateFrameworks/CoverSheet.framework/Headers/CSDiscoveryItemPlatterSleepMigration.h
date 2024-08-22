// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSDISCOVERYITEMPLATTERSLEEPMIGRATION_H
#define CSDISCOVERYITEMPLATTERSLEEPMIGRATION_H

@class PLPlatterDiscoveryView, UIView, UIImageView;



@interface CSDiscoveryItemPlatterSleepMigration : PLPlatterDiscoveryView {
    UIView *_sleepSymbolBackgroundView;
    UIView *_sleepSymbolImageView;
    UIImageView *_deviceImageView;
}




-(id)init;
-(void)_configureGraphicViewIfNecessary;
-(void)_layoutGraphicView;
-(void)layoutSubviews;
-(void)visualStylingProviderDidChange:(id)arg0 forCategory:(NSInteger)arg1 outgoingProvider:(id)arg2 ;


@end


#endif