// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXAUDITDEVICESETTING_H
#define AXAUDITDEVICESETTING_H

@class NSNumber, NSString;

#import <Foundation/Foundation.h>


@interface AXAuditDeviceSetting : NSObject

@property (retain, nonatomic) NSNumber *currentValueNumber; // ivar: _currentValueNumber
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) NSUInteger settingType; // ivar: _settingType
@property (nonatomic) NSInteger sliderTickMarks; // ivar: _sliderTickMarks


+(id)allKnownIdentifiers;
+(id)createWithIdentifier:(id)arg0 currentValue:(id)arg1 settingType:(NSUInteger)arg2 ;
+(void)registerTransportableObjectWithManager:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif