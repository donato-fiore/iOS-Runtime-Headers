// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NRURLRESOLUTIONMANAGER_H
#define NRURLRESOLUTIONMANAGER_H

@protocol NRBloomFilterInfoService;

#import <Foundation/Foundation.h>


@interface NRURLResolutionManager : NSObject

@property (readonly, nonatomic) NSObject<NRBloomFilterInfoService> *bloomFilterInfoService; // ivar: _bloomFilterInfoService
@property (readonly, nonatomic) BOOL userHasBundleSubscription;


+(id)sharedManager;
-(id)createResolutionOperationForNewsURL:(id)arg0 ;
-(id)createResolutionOperationForWebURL:(id)arg0 ;
-(id)init;


@end


#endif