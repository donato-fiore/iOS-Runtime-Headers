// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKSPALARMCONFIGURATION_H
#define HKSPALARMCONFIGURATION_H

@class NSString, NSDate, NSDictionary, NSSet, NSNumber;
@protocol BSDescriptionProviding, HKSPObject, HKSPDictionarySerializable, NAEquatable, NAHashable, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface HKSPAlarmConfiguration : NSObject <BSDescriptionProviding, HKSPObject, HKSPDictionarySerializable, NAEquatable, NAHashable, NSMutableCopying>



@property (readonly, nonatomic) BOOL allowsSnooze; // ivar: _allowsSnooze
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSDate *lastModifiedDate;
@property (readonly, nonatomic) NSUInteger playOptions; // ivar: _playOptions
@property (readonly, nonatomic) NSDictionary *relationshipChanges;
@property (readonly, nonatomic) NSSet *significantChanges;
@property (readonly, copy, nonatomic) NSNumber *soundVolume; // ivar: _soundVolume
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *toneIdentifier; // ivar: _toneIdentifier
@property (readonly, nonatomic) NSUInteger version; // ivar: _version
@property (readonly, copy, nonatomic) NSString *vibrationIdentifier; // ivar: _vibrationIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)_equateTo:(id)arg0 builderBuilderBlock:(id)arg1 ;
-(BOOL)_needsMigrationForCoder:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEquivalentTo:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initFromObject:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableCopy;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_buildForEquivalenceTo:(id)arg0 builder:(id)arg1 ;
-(void)_migrateForCoder:(id)arg0 ;
-(void)copyFromObject:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif