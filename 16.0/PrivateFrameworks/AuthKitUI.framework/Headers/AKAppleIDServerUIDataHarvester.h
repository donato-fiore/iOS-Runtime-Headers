// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AKAPPLEIDSERVERUIDATAHARVESTER_H
#define AKAPPLEIDSERVERUIDATAHARVESTER_H

@class NSMutableDictionary, NSDictionary;

#import <Foundation/Foundation.h>


@interface AKAppleIDServerUIDataHarvester : NSObject {
    NSMutableDictionary *_harvestedData;
}


@property (readonly, copy, nonatomic) NSDictionary *harvestedData;


-(id)init;
-(void)_harvestDataFromClientInfo:(id)arg0 withExtractor:(id)arg1 ;
-(void)_harvestIDMSRecoveryHeadersInfo:(id)arg0 ;
-(void)harvestDataFromCompanionResponse:(id)arg0 ;
-(void)harvestDataFromServerHTTPResponse:(id)arg0 ;
-(void)harvestDataFromServerUIObjectModel:(id)arg0 ;
-(void)harvestIDMSRecoveryInfoFromClientInfo:(id)arg0 ;
-(void)harvestIDMSRecoveryInfoFromHeaders:(id)arg0 ;


@end


#endif