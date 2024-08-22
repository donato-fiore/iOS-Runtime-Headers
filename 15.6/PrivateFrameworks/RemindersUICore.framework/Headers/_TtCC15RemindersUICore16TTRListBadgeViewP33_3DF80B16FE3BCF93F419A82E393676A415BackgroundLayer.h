// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTCC15REMINDERSUICORE16TTRLISTBADGEVIEWP33_3DF80B16FE3BCF93F419A82E393676A415BACKGROUNDLAYER_H
#define _TTCC15REMINDERSUICORE16TTRLISTBADGEVIEWP33_3DF80B16FE3BCF93F419A82E393676A415BACKGROUNDLAYER_H

@class TtC15RemindersUICore31TTRNoDefaultImplicitActionLayer;



@interface _TtCC15RemindersUICore16TTRListBadgeViewP33_3DF80B16FE3BCF93F419A82E393676A415BackgroundLayer : TtC15RemindersUICore31TTRNoDefaultImplicitActionLayer {
    ? shape;
    ? gradientAndBorderSettings;
    ? userInterfaceLayoutDirection;
    ? disableSublayerUpdates;
    ? fillLayer;
    ? lighteningLayer;
    ? darkeningLayer;
    ? customSmartListMaskLayer;
    ? borderLayer;
}


@property (nonatomic) float opacity;


-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLayer:(id)arg0 ;
-(void)layoutSublayers;


@end


#endif