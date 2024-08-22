// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPPLAYBACKEQSETTING_H
#define MPPLAYBACKEQSETTING_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MPPlaybackEQSetting : NSObject <NSCopying>



@property (readonly, nonatomic) int avPreset;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSInteger preset; // ivar: _preset


+(id)allSettings;
+(id)settingWithName:(id)arg0 ;
+(id)settingWithPreset:(NSInteger)arg0 ;
-(id)_initWithPreset:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif