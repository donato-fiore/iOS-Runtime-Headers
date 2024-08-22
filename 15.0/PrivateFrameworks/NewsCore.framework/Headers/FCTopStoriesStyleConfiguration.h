// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCTOPSTORIESSTYLECONFIGURATION_H
#define FCTOPSTORIESSTYLECONFIGURATION_H

@class NTPBTopStoriesStyleConfig, NSDictionary, NSString;

#import <Foundation/Foundation.h>

#import "FCColor.h"

@interface FCTopStoriesStyleConfiguration : NSObject {
    NTPBTopStoriesStyleConfig *_pbConfig;
    NSDictionary *_configDict;
}


@property (readonly, nonatomic) FCColor *background_color; // ivar: _background_color
@property (readonly, nonatomic) FCColor *dark_style_background_color; // ivar: _dark_style_background_color
@property (readonly, nonatomic) FCColor *dark_style_foreground_color; // ivar: _dark_style_foreground_color
@property (readonly, nonatomic) FCColor *foreground_color; // ivar: _foreground_color
@property (readonly, nonatomic) NSString *label; // ivar: _label
@property (readonly, nonatomic) NSUInteger storyType; // ivar: _storyType
@property (readonly, nonatomic) NSString *stringType; // ivar: _stringType


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithConfigDictionary:(id)arg0 ;
-(id)initWithPBTopStoriesStyleConfig:(id)arg0 ;


@end


#endif