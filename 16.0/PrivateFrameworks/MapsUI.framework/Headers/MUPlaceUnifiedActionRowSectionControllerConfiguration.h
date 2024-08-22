// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUPLACEUNIFIEDACTIONROWSECTIONCONTROLLERCONFIGURATION_H
#define MUPLACEUNIFIEDACTIONROWSECTIONCONTROLLERCONFIGURATION_H

@class MKPlaceActionManager, GEOUnifiedActionButtonModuleConfiguration, MKETAProvider, _MKPlaceActionButtonController;
@protocol MUPlaceActionRowMenuProvider, MUExternalActionHandling, MUHeaderButtonMenuActionProvider;

#import <Foundation/Foundation.h>

#import "MUAMSResultProvider.h"
#import "MUTimeExpirableLRUCache.h"

@interface MUPlaceUnifiedActionRowSectionControllerConfiguration : NSObject

@property (weak, nonatomic) MKPlaceActionManager *actionManager; // ivar: _actionManager
@property (weak, nonatomic) NSObject<MUPlaceActionRowMenuProvider> *actionRowMenuProvider; // ivar: _actionRowMenuProvider
@property (retain, nonatomic) MUAMSResultProvider *amsResultProvider; // ivar: _amsResultProvider
@property (retain, nonatomic) MUTimeExpirableLRUCache *artworkCache; // ivar: _artworkCache
@property (retain, nonatomic) GEOUnifiedActionButtonModuleConfiguration *buttonModuleConfiguration; // ivar: _buttonModuleConfiguration
@property (nonatomic) BOOL canShowDetourTime; // ivar: _canShowDetourTime
@property (weak, nonatomic) MKETAProvider *etaProvider; // ivar: _etaProvider
@property (weak, nonatomic) NSObject<MUExternalActionHandling> *externalActionHandler; // ivar: _externalActionHandler
@property (nonatomic) BOOL isSearchAlongRoute; // ivar: _isSearchAlongRoute
@property (weak, nonatomic) NSObject<MUHeaderButtonMenuActionProvider> *moreActionsProvider; // ivar: _moreActionsProvider
@property (nonatomic) NSUInteger primaryButtonType; // ivar: _primaryButtonType
@property (retain, nonatomic) _MKPlaceActionButtonController *secondaryActionButtonController; // ivar: _secondaryActionButtonController
@property (nonatomic) BOOL shouldPerformMapsExtensionDiscovery; // ivar: _shouldPerformMapsExtensionDiscovery




@end


#endif