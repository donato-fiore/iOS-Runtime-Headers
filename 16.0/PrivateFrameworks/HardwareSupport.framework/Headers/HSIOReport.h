// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HSIOREPORT_H
#define HSIOREPORT_H

@class NSArray, NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface HSIOReport : NSObject <NSCopying>



@property (retain, nonatomic) NSArray *channelDescriptions; // ivar: _channelDescriptions
@property (retain, nonatomic) NSDictionary *reportDictionary; // ivar: _reportDictionary


+(id)report:(*id)arg0 ;
+(id)reportWithOnlySimpleChannels:(*id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToReport:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithReportDictionary:(id)arg0 ;
-(id)reportByFilteringChannels:(id)arg0 ;
-(id)reportWithOnlySimpleChannels;
-(id)snapshot:(*id)arg0 ;


@end


#endif