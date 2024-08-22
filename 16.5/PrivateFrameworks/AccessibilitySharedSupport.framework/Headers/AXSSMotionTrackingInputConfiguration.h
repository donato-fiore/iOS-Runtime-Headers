// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXSSMOTIONTRACKINGINPUTCONFIGURATION_H
#define AXSSMOTIONTRACKINGINPUTCONFIGURATION_H

@class NSSet, NSArray, NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AXSSMotionTrackingInputConfiguration : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) BOOL allowSeparateInputForExpressions; // ivar: _allowSeparateInputForExpressions
@property (copy, nonatomic) NSSet *allowedTrackingTypes; // ivar: _allowedTrackingTypes
@property (readonly, copy, nonatomic) NSArray *orderedCameraInputPreference;
@property (copy, nonatomic) NSArray *orderedInputPreference; // ivar: _orderedInputPreference
@property (readonly, copy, nonatomic) NSDictionary *plistDictionary;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToMotionTrackingInputConfiguration:(id)arg0 ;
-(BOOL)supportsTrackingType:(NSUInteger)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOrderedInputPreference:(id)arg0 allowedTrackingTypes:(id)arg1 allowSeparateInputForExpressions:(BOOL)arg2 ;
-(id)initWithPlistDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif