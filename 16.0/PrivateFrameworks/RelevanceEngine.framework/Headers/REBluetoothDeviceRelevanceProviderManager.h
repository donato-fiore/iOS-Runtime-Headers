// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REBLUETOOTHDEVICERELEVANCEPROVIDERMANAGER_H
#define REBLUETOOTHDEVICERELEVANCEPROVIDERMANAGER_H

@class NSString;
@protocol REPredictorObserver, REBluetoothDeviceRelevanceProviderManagerProperties;


#import "RERelevanceProviderManager.h"

@interface REBluetoothDeviceRelevanceProviderManager : RERelevanceProviderManager <REPredictorObserver, REBluetoothDeviceRelevanceProviderManagerProperties>

 {
    BOOL _connectedToCar;
    BOOL _connectedToSpeaker;
}


@property (readonly, nonatomic) BOOL connectedToCar;
@property (readonly, nonatomic) BOOL connectedToSpeaker;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_wantsSeperateRelevanceQueue;
+(Class)_relevanceProviderClass;
+(id)_features;
-(id)_valueForProvider:(id)arg0 feature:(id)arg1 ;
-(id)initWithQueue:(id)arg0 ;
-(void)_prepareForUpdate;
-(void)pause;
-(void)predictorDidUpdate:(id)arg0 ;
-(void)resume;


@end


#endif