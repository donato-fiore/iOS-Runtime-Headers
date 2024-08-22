// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCTODAYFEEDCONFIGRESPONSE_H
#define FCTODAYFEEDCONFIGRESPONSE_H

@class NSData, NSDictionary;

#import <Foundation/Foundation.h>


@interface FCTodayFeedConfigResponse : NSObject

@property (readonly, nonatomic) NSData *ckConfigData; // ivar: _ckConfigData
@property (readonly, nonatomic) NSDictionary *ckRecordsByType; // ivar: _ckRecordsByType
@property (readonly, nonatomic) NSData *newsEdgeConfigData; // ivar: _newsEdgeConfigData


-(id)initWithCKConfigData:(id)arg0 ckRecordsByType:(id)arg1 newsEdgeConfigData:(id)arg2 ;


@end


#endif