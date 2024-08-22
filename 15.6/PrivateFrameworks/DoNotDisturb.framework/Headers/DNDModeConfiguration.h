// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DNDMODECONFIGURATION_H
#define DNDMODECONFIGURATION_H

@class NSDate, NSString, NSArray;
@protocol DNDDiffBuilding, NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "DNDConfiguration.h"
#import "DNDMode.h"

@interface DNDModeConfiguration : NSObject <DNDDiffBuilding, NSCopying, NSMutableCopying, NSSecureCoding>

 {
    BOOL _hasSecureData;
}


@property (readonly, nonatomic) NSUInteger allowSmartEntry;
@property (readonly, nonatomic, getter=isAutomaticallyGenerated) BOOL automaticallyGenerated; // ivar: _automaticallyGenerated
@property (readonly, nonatomic) NSInteger compatibilityVersion; // ivar: _compatibilityVersion
@property (readonly, copy, nonatomic) DNDConfiguration *configuration; // ivar: _configuration
@property (readonly, copy, nonatomic) NSDate *created; // ivar: _created
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger dimsLockScreen; // ivar: _dimsLockScreen
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger impactsAvailability; // ivar: _impactsAvailability
@property (readonly, copy, nonatomic) NSDate *lastModified; // ivar: _lastModified
@property (readonly, copy, nonatomic) DNDMode *mode; // ivar: _mode
@property (readonly, nonatomic) NSInteger resolvedCompatibilityVersion;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isSupportedConfiguration) BOOL supportedConfiguration;
@property (readonly, copy, nonatomic) NSArray *triggers; // ivar: _triggers


+(BOOL)supportsSecureCoding;
+(id)defaultModeConfiguration;
-(BOOL)_containsSecureTriggers:(id)arg0 ;
-(BOOL)hasSecureData;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)_maxTriggerCompatibilityVersion:(id)arg0 ;
-(id)_initWithModeConfiguration:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMode:(id)arg0 configuration:(id)arg1 triggers:(id)arg2 ;
-(id)initWithMode:(id)arg0 configuration:(id)arg1 triggers:(id)arg2 impactsAvailability:(NSUInteger)arg3 dimsLockScreen:(NSUInteger)arg4 created:(id)arg5 lastModified:(id)arg6 automaticallyGenerated:(BOOL)arg7 compatibilityVersion:(NSInteger)arg8 ;
-(id)mergeWithModeConfiguration:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)shortDescription;
-(void)diffAgainstObject:(id)arg0 usingDiffBuilder:(id)arg1 withDescription:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)log:(id)arg0 withMessage:(id)arg1 ;


@end


#endif