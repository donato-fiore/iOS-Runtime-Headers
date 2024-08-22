// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BKSBUTTONHAPTICSDEFINITION_H
#define BKSBUTTONHAPTICSDEFINITION_H

@class BSSettings;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BKSButtonHapticsDefinition : NSObject <NSSecureCoding>



@property (readonly, nonatomic, getter=_BSSettings) BSSettings *BSSettings; // ivar: _settings
@property (nonatomic) NSInteger clickHapticAssetType;
@property (readonly, nonatomic, getter=isLongPressEnabled) NSInteger longPressEnabled;
@property (nonatomic) CGFloat maximumLongPressTimeInterval;
@property (nonatomic) CGFloat maximumMultiplePressTimeInterval;
@property (nonatomic) NSInteger maximumPressCount;
@property (nonatomic) NSInteger maximumTapCount;
@property (nonatomic) CGFloat minimumLongPressTimeInterval;
@property (nonatomic) CGFloat minimumMultiplePressTimeInterval;
@property (nonatomic) BOOL representsHomeButton; // ivar: _representsHomeButton


+(BOOL)supportsSecureCoding;
+(id)definitionForHomeButton;
-(id)_initWithBSSettings:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateFromDefinition:(id)arg0 withChangeInspectorBlock:(id)arg1 ;


@end


#endif