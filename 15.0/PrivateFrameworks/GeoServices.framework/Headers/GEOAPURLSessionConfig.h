// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOAPURLSESSIONCONFIG_H
#define GEOAPURLSESSIONCONFIG_H


#import <Foundation/Foundation.h>


@interface GEOAPURLSessionConfig : NSObject

@property (nonatomic) BOOL discretionary; // ivar: _discretionary
@property (nonatomic) BOOL requirePower; // ivar: _requirePower
@property (nonatomic) BOOL requireWifi; // ivar: _requireWifi
@property (nonatomic) int type; // ivar: _type


+(id)allSessionConfigTypes;
+(id)configForURLSessionConfigType:(int)arg0 ;


@end


#endif