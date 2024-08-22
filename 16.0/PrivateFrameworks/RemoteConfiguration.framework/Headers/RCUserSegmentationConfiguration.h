// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RCUSERSEGMENTATIONCONFIGURATION_H
#define RCUSERSEGMENTATIONCONFIGURATION_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface RCUserSegmentationConfiguration : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSUInteger backgroundRefreshRate; // ivar: _backgroundRefreshRate
@property (readonly, copy, nonatomic) NSString *endpointURLString; // ivar: _endpointURLString
@property (readonly, nonatomic) NSUInteger foregroundRefreshRate; // ivar: _foregroundRefreshRate
@property (readonly, nonatomic) NSUInteger modMax; // ivar: _modMax
@property (readonly, nonatomic) NSUInteger modThreshold; // ivar: _modThreshold
@property (readonly, copy, nonatomic) NSString *widgetEndpointURLString; // ivar: _widgetEndpointURLString


+(BOOL)supportsSecureCoding;
+(id)defaultConfiguration;
+(id)userSegmentationConfigurationWithConfigDict:(id)arg0 environment:(NSUInteger)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithForegroundRefreshRate:(NSUInteger)arg0 backgroundRefreshRate:(NSUInteger)arg1 modThreshold:(NSUInteger)arg2 modMax:(NSUInteger)arg3 endpointURLString:(id)arg4 widgetEndpointURLString:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif