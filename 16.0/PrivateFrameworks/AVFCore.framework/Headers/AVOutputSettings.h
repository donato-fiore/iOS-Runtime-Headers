// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVOUTPUTSETTINGS_H
#define AVOUTPUTSETTINGS_H

@class NSSet, NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface AVOutputSettings : NSObject <NSCopying>



@property (readonly, nonatomic) NSSet *compatibleMediaTypes;
@property (readonly, nonatomic) NSDictionary *outputSettingsDictionary; // ivar: _outputSettingsDictionary
@property (readonly, nonatomic) BOOL willYieldCompressedSamples;


+(BOOL)supportsEmptyOutputSettingsDictionary;
+(NSUInteger)_validateOutputSettingsDictionary:(id)arg0 compatibilityDescription:(*id)arg1 ;
+(NSUInteger)validateOutputSettingsDictionary:(id)arg0 ;
+(id)_outputSettingsWithOutputSettingsDictionary:(id)arg0 mediaType:(id)arg1 exceptionReason:(*id)arg2 ;
+(id)defaultOutputSettingsForMediaType:(id)arg0 ;
+(id)eligibleOutputSettingsDictionaryKeys;
+(id)outputSettingsWithOutputSettingsDictionary:(id)arg0 mediaType:(id)arg1 ;
+(id)registeredOutputSettingsClasses;
-(BOOL)canFullySpecifyOutputFormatReturningReason:(*id)arg0 ;
-(BOOL)encoderIsAvailableOnCurrentSystemReturningError:(*id)arg0 ;
-(BOOL)validateUsingOutputSettingsValidator:(id)arg0 reason:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithOutputSettingsDictionary:(id)arg0 exceptionReason:(*id)arg1 ;
-(void)dealloc;


@end


#endif