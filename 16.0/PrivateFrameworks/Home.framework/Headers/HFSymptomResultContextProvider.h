// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFSYMPTOMRESULTCONTEXTPROVIDER_H
#define HFSYMPTOMRESULTCONTEXTPROVIDER_H

@class HMAccessory, NSString, NSUUID, HMMediaSystem;
@protocol HFSymptomResultContextProviding;

#import <Foundation/Foundation.h>


@interface HFSymptomResultContextProvider : NSObject <HFSymptomResultContextProviding>



@property (readonly, nonatomic) HMAccessory *accessory; // ivar: _accessory
@property (readonly, copy, nonatomic) NSString *accessoryName;
@property (readonly, copy, nonatomic) NSString *accessoryNetworkSSID;
@property (readonly, copy, nonatomic) NSUUID *accessoryUUID;
@property (readonly, copy, nonatomic) NSString *currentAppleMusicAccountName;
@property (readonly, copy, nonatomic) NSString *currentDeviceNetworkSSID;
@property (readonly, copy, nonatomic) NSString *currentUserID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *homeKitObjectName;
@property (readonly, nonatomic) HMMediaSystem *mediaSystem; // ivar: _mediaSystem
@property (readonly) Class superclass;


-(BOOL)shouldDisplayManualFixOptionForSymptom:(id)arg0 ;
-(NSInteger)fixStateForSymptom:(id)arg0 ;
-(id)init;
-(id)initWithAccessory:(id)arg0 mediaSystem:(id)arg1 ;


@end


#endif