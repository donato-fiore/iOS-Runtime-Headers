// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTSTOREIDENTIFIER_H
#define MTSTOREIDENTIFIER_H

@class NSString, NSNumber;

#import <Foundation/Foundation.h>


@interface MTStoreIdentifier : NSObject

@property (retain, nonatomic) NSString *feedUrl; // ivar: _feedUrl
@property (retain, nonatomic) NSNumber *storeIdentifier; // ivar: _storeIdentifier


+(BOOL)isEmpty:(NSInteger)arg0 ;
+(BOOL)isEmptyNumber:(id)arg0 ;
+(BOOL)isNotEmpty:(NSInteger)arg0 ;
+(BOOL)isNotEmptyNumber:(id)arg0 ;
+(NSInteger)adamIDFromSerpentId:(NSInteger)arg0 ;
+(NSInteger)adamIDFromSerpentId_override_feature_flag:(NSInteger)arg0 ;
+(NSInteger)serpentIdFromAdamId:(NSInteger)arg0 ;
+(NSInteger)serpentIdFromAdamId_override_feature_flag:(NSInteger)arg0 ;
+(id)adamIDListFromSerpentIdList:(id)arg0 ;
+(id)adamIdNumberFromSerpentIdNumber:(id)arg0 ;
+(id)adamIdNumberFromStoreId:(NSInteger)arg0 ;
+(id)identifierWithFeedUrl:(id)arg0 ;
+(id)identifierWithFeedUrl:(id)arg0 storeIdentifier:(id)arg1 ;
+(id)serpentIdListFromAdamIDList:(id)arg0 ;
+(id)serpentIdNumberFromAdamIdNumber:(id)arg0 ;
+(id)serpentIdNumberFromStoreId:(NSInteger)arg0 ;
-(id)initWithFeedUrl:(id)arg0 ;
-(id)initWithFeedUrl:(id)arg0 storeIdentifier:(id)arg1 ;


@end


#endif