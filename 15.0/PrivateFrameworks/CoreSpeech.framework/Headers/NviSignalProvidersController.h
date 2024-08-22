// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NVISIGNALPROVIDERSCONTROLLER_H
#define NVISIGNALPROVIDERSCONTROLLER_H

@class NSHashTable, NSDictionary, NSMapTable;
@protocol NviAssetsProvider;

#import <Foundation/Foundation.h>


@interface NviSignalProvidersController : NSObject

@property (retain, nonatomic) NSObject<NviAssetsProvider> *assetsProvider; // ivar: _assetsProvider
@property (retain, nonatomic) NSHashTable *currActiveDataSourceTypes; // ivar: _currActiveDataSourceTypes
@property (retain, nonatomic) NSHashTable *currActiveSigProvTypes; // ivar: _currActiveSigProvTypes
@property (retain, nonatomic) NSDictionary *dataSrcMap; // ivar: _dataSrcMap
@property (retain, nonatomic) NSMapTable *sigProvidersMap; // ivar: _sigProvidersMap


+(void)initialize;
-(BOOL)_setupSignalProviders:(id)arg0 ;
-(id)initWithAssetsProvider:(id)arg0 dataSourceMap:(id)arg1 signalProviderToDataSourceMap:(id)arg2 ;
-(void)_iterateSignalMask:(NSUInteger)arg0 withHandler:(id)arg1 ;
-(void)_startDataSourcesWithContext:(id)arg0 ;
-(void)_startSignalProvidersWithContext:(id)arg0 ;
-(void)_stopCurrentlyRunningSignalProviders;
-(void)_stopDataSources;
-(void)dealloc;
-(void)registerSignalProviderDelegate:(id)arg0 forSignalTypes:(NSUInteger)arg1 ;
-(void)registerSignalProviderDelegateForAllSignalTypes:(id)arg0 ;
-(void)reset;
-(void)startWithNviContext:(id)arg0 ;
-(void)stop;
-(void)unregisterSignalProviderDelegate:(id)arg0 forSignalType:(NSUInteger)arg1 ;
-(void)unregisterSignalProviderDelegateForAllSignalTypes:(id)arg0 ;


@end


#endif