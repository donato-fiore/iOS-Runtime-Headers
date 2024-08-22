// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PACONFIGURATION_H
#define PACONFIGURATION_H

@class NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PAConfiguration : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSDictionary *audiogramSettings; // ivar: _audiogramSettings
@property (nonatomic) NSUInteger level; // ivar: _level
@property (retain, nonatomic) NSDictionary *preset; // ivar: _preset
@property (retain, nonatomic) NSDictionary *presetAdjustments; // ivar: _presetAdjustments
@property (nonatomic) NSUInteger shape; // ivar: _shape


+(BOOL)supportsSecureCoding;
+(id)configurationFromType:(NSUInteger)arg0 ;
+(id)configurationWithAudiogram:(id)arg0 ;
+(id)configurationWithLevel:(NSUInteger)arg0 andShape:(NSUInteger)arg1 ;
+(id)configurationWithPreset:(id)arg0 andAdjustments:(id)arg1 ;
+(id)configurationWithRawAdjustment:(NSUInteger)arg0 ;
+(id)dataFromPreset:(struct ? *)arg0 ;
+(id)paramDataWithValue:(float)arg0 andOffset:(int)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(struct ? *)readSettingsFromPreset:(id)arg0 ;
-(struct ? *)settingsFromConfiguration:(BOOL)arg0 ;
-(struct ? *)transparencySettingsForAddress:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif