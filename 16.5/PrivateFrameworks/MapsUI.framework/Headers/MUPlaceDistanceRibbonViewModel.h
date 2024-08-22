// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUPLACEDISTANCERIBBONVIEWMODEL_H
#define MUPLACEDISTANCERIBBONVIEWMODEL_H

@class MKETAProvider, MKMapItem, NSString;
@protocol MKETAProviderObserver;


#import "MUPlaceRibbonItemViewModel.h"

@interface MUPlaceDistanceRibbonViewModel : MUPlaceRibbonItemViewModel <MKETAProviderObserver>

 {
    MKETAProvider *_etaProvider;
    MKMapItem *_mapItem;
    MUPlaceRibbonItemViewModel *_crowsDistanceViewModel;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithMapItem:(id)arg0 etaProvider:(id)arg1 ;
-(id)titleStringProvider:(SEL)arg0 ;
-(id)valueStringProvider:(SEL)arg0 ;
-(void)ETAProviderUpdated:(id)arg0 ;
-(void)dealloc;


@end


#endif