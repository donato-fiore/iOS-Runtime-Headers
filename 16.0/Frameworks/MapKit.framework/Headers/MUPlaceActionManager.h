// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUPLACEACTIONMANAGER_H
#define MUPLACEACTIONMANAGER_H

@protocol _MKInfoCardAnalyticsDelegate><_MKPlaceCardConforming><MKPlaceCardActionControllerDelegate;


#import "MKPlaceActionManager.h"

@interface MUPlaceActionManager : MKPlaceActionManager

@property (readonly, nonatomic) NSObject<_MKInfoCardAnalyticsDelegate><_MKPlaceCardConforming><MKPlaceCardActionControllerDelegate> *delegate;


-(BOOL)_showWebsite;
-(id)createFooterActions;
-(id)createMenuActions;
-(void)_addAddressFooterActions:(id)arg0 ;
-(void)_addBasicFooterActions:(id)arg0 ;
-(void)_addDroppedPinFooterActions:(id)arg0 ;
-(void)_addHomeActionIfNeeded:(id)arg0 ;
-(void)_addItemIfInMapsApp:(id)arg0 actions:(id)arg1 ;
-(void)_addMyLocationFooterActions:(id)arg0 ;
-(void)_addTransitLineItemFooterActions:(id)arg0 ;


@end


#endif