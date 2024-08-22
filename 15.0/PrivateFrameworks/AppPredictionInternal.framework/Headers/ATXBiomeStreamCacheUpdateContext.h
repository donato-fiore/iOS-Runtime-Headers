// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXBIOMESTREAMCACHEUPDATECONTEXT_H
#define ATXBIOMESTREAMCACHEUPDATECONTEXT_H

@class NSMutableDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ATXBiomeStreamCacheUpdateContext : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSMutableDictionary *currentBlendingModelCacheCreationDatesByConsumerSubType; // ivar: _currentBlendingModelCacheCreationDatesByConsumerSubType
@property (retain, nonatomic) NSMutableDictionary *currentClientModelCacheCreationDatesByClientModelId; // ivar: _currentClientModelCacheCreationDatesByClientModelId
@property (retain, nonatomic) NSMutableDictionary *previousBlendingModelCacheAgesByConsumerSubType; // ivar: _previousBlendingModelCacheAgesByConsumerSubType
@property (retain, nonatomic) NSMutableDictionary *previousClientModelCacheAgesByClientModelId; // ivar: _previousClientModelCacheAgesByClientModelId


+(BOOL)supportsSecureCoding;
-(BOOL)checkAndReportDecodingFailureIfNeededForid:(id)arg0 key:(id)arg1 coder:(id)arg2 errorDomain:(id)arg3 errorCode:(NSInteger)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXBiomeStreamCacheUpdateContext:(id)arg0 ;
-(NSUInteger)hash;
-(id)cacheAgeForPreviousBlendingUICacheUpdateForConsumerSubType:(unsigned char)arg0 ;
-(id)cacheAgeForPreviousClientModelCacheWithClientModelId:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCurrentClientModelCacheCreationDates:(id)arg0 previousClientModelCacheAges:(id)arg1 currentBlendingModelCacheCreationDates:(id)arg2 previousBlendingModelCacheAges:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateWithBlendingUICacheUpdate:(id)arg0 ;
-(void)updateWithClientModelCacheUpdate:(id)arg0 ;
-(void)updateWithUIEvent:(id)arg0 ;


@end


#endif