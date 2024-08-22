// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRREPAIRSTATUS_H
#define CRREPAIRSTATUS_H


#import <Foundation/Foundation.h>


@interface CRRepairStatus : NSObject



+(BOOL)hasHadAuthorizedRepair;
+(BOOL)hasHadAuthorizedRepairForComponent:(NSUInteger)arg0 ;
+(BOOL)isVeridianFWUpdateRequired;
+(id)_getManifestForDataClass:(id)arg0 ;
+(id)_wasRepaired;
+(id)_wasRepairedWithCombinedDataClass:(id)arg0 ;
+(id)_wasRepairedWithDataClass:(id)arg0 ;
+(id)_wasRepairedWithSysCfg:(id)arg0 ;
+(id)getDataForDataClass:(id)arg0 ;
+(id)getLocalSealingManifest;
+(id)getVeridianFWVersionInfo;
+(id)isServicePartWithError:(*id)arg0 ;


@end


#endif