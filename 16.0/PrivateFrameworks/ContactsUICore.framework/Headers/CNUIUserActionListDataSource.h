// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNUIUSERACTIONLISTDATASOURCE_H
#define CNUIUSERACTIONLISTDATASOURCE_H

@class NSString;
@protocol CNUIUserActionListDataSource, CNScheduler, CNSchedulerProvider;

#import <Foundation/Foundation.h>

#import "CNUIUserActionDisambiguationModeler.h"
#import "CNUIUserActionListModelCache.h"

@interface CNUIUserActionListDataSource : NSObject <CNUIUserActionListDataSource>

 {
    NSUInteger _cacheCapacity;
    CGFloat _cacheEntryRefreshAge;
    CGFloat _cacheEntryExpirationAge;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CNUIUserActionDisambiguationModeler *modeler; // ivar: _modeler
@property (retain, nonatomic) CNUIUserActionListModelCache *models; // ivar: _models
@property (readonly, nonatomic) NSObject<CNScheduler> *resolutionScheduler; // ivar: _resolutionScheduler
@property (readonly, nonatomic) NSObject<CNSchedulerProvider> *schedulerProvider; // ivar: _schedulerProvider
@property (readonly) Class superclass;
@property (nonatomic) BOOL tracksChanges; // ivar: _tracksChanges


+(BOOL)isSupportedActionType:(id)arg0 ;
+(id)allActionTypes;
+(id)allSupportedActionTypes;
+(id)allSupportedActionTypesWithCapabilities:(id)arg0 ;
+(id)descriptorForRequiredKeys;
+(id)displayNameForButtonForActionType:(id)arg0 ;
+(id)displayNameForDisambiguationForActionType:(id)arg0 ;
+(id)makeCacheWithCapacity:(NSUInteger)arg0 expirationAge:(CGFloat)arg1 timeProvider:(id)arg2 ;
+(id)os_log;
-(BOOL)shouldUseLabelForButtonWithDefaultAction:(id)arg0 ;
-(id)actionTypesForConsumer:(id)arg0 ;
-(id)actionTypesToUpdateForSelectedItem:(id)arg0 ;
-(id)consumer:(id)arg0 actionModelsForContact:(id)arg1 actionType:(id)arg2 ;
-(id)consumer:(id)arg0 actionModelsForContact:(id)arg1 actionType:(id)arg2 handler:(id)arg3 ;
-(id)consumer:(id)arg0 currentActionModelForContact:(id)arg1 actionType:(id)arg2 ;
-(id)consumer:(id)arg0 imageForActionType:(id)arg1 ;
-(id)consumer:(id)arg0 localizedButtonDisplayNameForActionType:(id)arg1 ;
-(id)consumer:(id)arg0 localizedDisplayNameForActionType:(id)arg1 ;
-(id)consumer:(id)arg0 localizedDisplayNameForButtonWithDefaultAction:(id)arg1 actionType:(id)arg2 ;
-(id)initWithDiscoveringEnvironment:(id)arg0 ;
-(id)initWithSchedulerProvider:(id)arg0 ;
-(id)initWithSchedulerProvider:(id)arg0 idsAvailabilityProvider:(id)arg1 ;
-(id)makeCacheWithCurrentSettings;
-(id)makeModelObservableForContact:(id)arg0 actionType:(id)arg1 ;
-(id)modelsForContact:(id)arg0 actionType:(id)arg1 ;
-(id)thirdPartyActionsForContact:(id)arg0 propertyKey:(id)arg1 identifier:(id)arg2 ;
-(id)thirdPartyActionsForContactProperty:(id)arg0 ;
-(id)thirdPartyTargetsForActionTypes:(id)arg0 ;
-(void)consumer:(id)arg0 didSelectItem:(id)arg1 forContact:(id)arg2 actionType:(id)arg3 ;
-(void)dealloc;
-(void)makeCacheAndTransferContents;
-(void)performFirstResolutionForEntry:(id)arg0 contact:(id)arg1 actionType:(id)arg2 ;
-(void)refreshEntry:(id)arg0 contact:(id)arg1 actionType:(id)arg2 ;
-(void)setCacheCapacity:(NSUInteger)arg0 ;
-(void)setCacheEntryExpirationAge:(CGFloat)arg0 ;
-(void)setCacheEntryRefreshAge:(CGFloat)arg0 ;
-(void)setContactStore:(id)arg0 ;


@end


#endif