// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REELEMENTDATASOURCE_H
#define REELEMENTDATASOURCE_H

@class NSDictionary, NSString, NSArray;
@protocol REElementDataSourceProperties, REElementDataSourceActivityDelegate, REElementDataSourceDelegate;

#import <Foundation/Foundation.h>


@interface REElementDataSource : NSObject <REElementDataSourceProperties>

 {
    id<REElementDataSourceActivityDelegate> *_activityDelegate;
}


@property (nonatomic) BOOL allowsLocationUse; // ivar: _allowsLocationUse
@property (readonly, nonatomic) NSDictionary *dataSourceProperties;
@property (weak, nonatomic) NSObject<REElementDataSourceDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSString *logHeader; // ivar: _logHeader
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic, getter=isRunning) BOOL running; // ivar: _running
@property (nonatomic) NSUInteger state; // ivar: _state
@property (readonly, nonatomic) NSArray *supportedSections;
@property (readonly, nonatomic, getter=hasUnlockedSinceBoot) BOOL unlockedSinceBoot; // ivar: _unlockedSinceBoot


+(BOOL)drivenByUserInteraction;
+(BOOL)supportsPersistence;
+(BOOL)wantsAppPrewarm;
+(BOOL)wantsAutomaticFetching;
+(BOOL)wantsLocationInUseAsserton;
+(BOOL)wantsPrivateQueue;
+(BOOL)wantsReloadForFirstDeviceUnlock;
+(BOOL)wantsReloadForSignificantTimeChange;
+(NSUInteger)elementContentMode;
+(id)applicationBundleIdentifier;
+(id)bundleIdentifier;
+(id)contentAttributes;
+(id)overrideDataSourceImage;
+(id)overrideLocalizedDataSourceName;
+(struct ? )minimumSupportedSystemVersion;
-(id)activityDelegate;
-(id)complicationDescriptor;
-(id)init;
-(void)beginActivity:(id)arg0 ;
-(void)beginFetchingData;
-(void)collectLoggableState:(id)arg0 ;
-(void)elementWithIdentifierDidBecomeHidden:(id)arg0 ;
-(void)elementWithIdentifierWillBecomeVisible:(id)arg0 ;
-(void)finishActivity:(id)arg0 ;
-(void)finishFetchingData;
-(void)getElementsDuringDateInterval:(id)arg0 inSection:(NSUInteger)arg1 withHandler:(id)arg2 ;
-(void)getElementsInSection:(id)arg0 withHandler:(id)arg1 ;
-(void)loadLoggingHeader;
-(void)pause;
-(void)resume;
-(void)setActivityDelegate:(id)arg0 ;


@end


#endif