// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCTOPSTORIESCONFIGURATION_H
#define FCTOPSTORIESCONFIGURATION_H

@class NTPBTopStoriesConfig, NSDictionary, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface FCTopStoriesConfiguration : NSObject <NSCopying>

 {
    NTPBTopStoriesConfig *_pbConfig;
    NSDictionary *_configDict;
}


@property (readonly, nonatomic) NSString *channelID; // ivar: _channelID
@property (readonly, nonatomic, getter=isPromotingEnabled) BOOL promotingEnabled; // ivar: _promotingEnabled
@property (readonly, nonatomic) NSInteger storyTypeTimeout; // ivar: _storyTypeTimeout
@property (readonly, nonatomic) NSDictionary *styleConfigurations; // ivar: _styleConfigurations


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithConfigDictionary:(id)arg0 ;
-(id)initWithPBTopStoriesConfig:(id)arg0 ;


@end


#endif