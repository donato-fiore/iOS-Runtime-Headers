// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUPLACEHEADERBUTTONSSECTIONCONTROLLERCONFIGURATION_H
#define MUPLACEHEADERBUTTONSSECTIONCONTROLLERCONFIGURATION_H

@class GEOHeaderButtonModuleConfiguration, MKETAProvider;
@protocol MUHeaderButtonMenuActionProvider;

#import <Foundation/Foundation.h>


@interface MUPlaceHeaderButtonsSectionControllerConfiguration : NSObject

@property (retain, nonatomic) GEOHeaderButtonModuleConfiguration *buttonModuleConfiguration; // ivar: _buttonModuleConfiguration
@property (nonatomic) BOOL canShowDetourTime; // ivar: _canShowDetourTime
@property (weak, nonatomic) MKETAProvider *etaProvider; // ivar: _etaProvider
@property (weak, nonatomic) NSObject<MUHeaderButtonMenuActionProvider> *menuProvider; // ivar: _menuProvider
@property (nonatomic) BOOL showMoreButton; // ivar: _showMoreButton




@end


#endif