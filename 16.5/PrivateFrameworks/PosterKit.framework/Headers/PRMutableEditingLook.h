// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRMUTABLEEDITINGLOOK_H
#define PRMUTABLEEDITINGLOOK_H

@class NSString;


#import "PREditingLook.h"
#import "PREditingLookProperties.h"
#import "PRTimeFontConfiguration.h"

@interface PRMutableEditingLook : PREditingLook

@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) PREditingLookProperties *initialProperties; // ivar: _initialProperties
@property (copy, nonatomic) PRTimeFontConfiguration *initialTimeFontConfiguration;
@property (copy, nonatomic) id *initialTitleColor;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithIdentifier:(id)arg0 displayName:(id)arg1 initialTimeFontConfiguration:(id)arg2 initialTitleColor:(id)arg3 ;


@end


#endif