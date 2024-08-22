// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXANCHORMODELDATAANONYMIZER_H
#define ATXANCHORMODELDATAANONYMIZER_H


#import <Foundation/Foundation.h>


@interface ATXAnchorModelDataAnonymizer : NSObject



+(BOOL)isFirstPartyApp:(id)arg0 ;
+(BOOL)shouldAnonymizeActionType:(id)arg0 forBundleId:(id)arg1 ;
+(BOOL)shouldAnonymizeBundle:(id)arg0 ;
+(id)readDeviceSpecificSalt;
+(id)setSaltToUserDefaults:(id)arg0 scheme:(id)arg1 ;
+(void)_hashAndSaltActionKeyMetadataIfNeededInList:(id)arg0 withSalt:(id)arg1 ;
+(void)anonymizeMessage:(id)arg0 ;


@end


#endif