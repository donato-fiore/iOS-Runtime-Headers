// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUPLACEENRICHMENTACTIONMANAGER_H
#define MUPLACEENRICHMENTACTIONMANAGER_H

@class NSString, NSMutableArray, NSMutableDictionary, MKMapItem, MUPlaceActionManager, NSMutableSet;
@protocol MUPlaceEnrichmentActionHandler, MUPlaceEnrichmentSectionAnalyticsDelegate, MUPlaceCallToActionSectionControllerDelegate, MUPlaceEnrichmentDataProvider, MUExternalActionHandling;

#import <Foundation/Foundation.h>

#import "MUAMSResultProvider.h"
#import "MUPlaceDataAvailability.h"
#import "MUPresentationOptions.h"

@interface MUPlaceEnrichmentActionManager : NSObject <MUPlaceEnrichmentActionHandler>



@property (retain, nonatomic) MUAMSResultProvider *amsResultProvider; // ivar: _amsResultProvider
@property (weak, nonatomic) NSObject<MUPlaceEnrichmentSectionAnalyticsDelegate> *analyticsDelegate; // ivar: _analyticsDelegate
@property (weak, nonatomic) NSObject<MUPlaceCallToActionSectionControllerDelegate> *callToActionDelegate; // ivar: _callToActionDelegate
@property (retain, nonatomic) MUPlaceDataAvailability *dataAvailability; // ivar: _dataAvailability
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<MUPlaceEnrichmentDataProvider> *enrichmentDataProvider; // ivar: _enrichmentDataProvider
@property (weak, nonatomic) NSObject<MUExternalActionHandling> *externalActionHandler; // ivar: _externalActionHandler
@property (retain, nonatomic) NSMutableArray *externalActionsControllers; // ivar: _externalActionsControllers
@property (retain, nonatomic) NSMutableDictionary *externalActionsPairs; // ivar: _externalActionsPairs
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MKMapItem *mapItem; // ivar: _mapItem
@property (copy, nonatomic) id *onActionUpdate; // ivar: _onActionUpdate
@property (retain, nonatomic) MUPlaceActionManager *placeActionManager; // ivar: _placeActionManager
@property (retain, nonatomic) MUPresentationOptions *presentationOptions; // ivar: _presentationOptions
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableSet *supportedActions; // ivar: _supportedActions


-(id)adamIDForAppCategory:(id)arg0 ;
-(id)dictionaryForAction:(id)arg0 ;
-(id)initWithPlaceActionManager:(id)arg0 mapItem:(id)arg1 dataAvailability:(id)arg2 amsResultProvider:(id)arg3 callToActionDelegate:(id)arg4 externalActionHandler:(id)arg5 analyticsDelegate:(id)arg6 onActionUpdate:(id)arg7 ;
-(id)supportedPlaceEnrichmentActions;
-(void)addExternalActionsAsSupportedActions:(id)arg0 ;
-(void)addPhotoAction:(id)arg0 ;
-(void)configureWithEnrichmentDataProvider:(id)arg0 presentationOptions:(id)arg1 ;
-(void)directionsAction:(id)arg0 ;
-(void)getAppAction:(id)arg0 ;
-(void)performActionUsingArguments:(id)arg0 completion:(id)arg1 ;
-(void)ratePlaceAction:(id)arg0 ;


@end


#endif