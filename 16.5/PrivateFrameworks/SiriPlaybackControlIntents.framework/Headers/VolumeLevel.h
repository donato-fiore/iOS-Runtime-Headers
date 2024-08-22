// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VOLUMELEVEL_H
#define VOLUMELEVEL_H

@class INObject, NSNumber;



@interface VolumeLevel : INObject

@property (nonatomic, retain) NSNumber *currentVolumeOutput;
@property (nonatomic, retain) NSNumber *resolvedVolumeOutput;
@property (nonatomic) NSInteger volumeSettingQualifier;
@property (nonatomic) NSInteger volumeSettingState;
@property (nonatomic) NSInteger volumeSettingType;
@property (nonatomic) NSInteger volumeSettingUnit;
@property (nonatomic, retain) NSNumber *volumeSettingValue;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 displayString:(id)arg1 pronunciationHint:(id)arg2 ;


@end


#endif