// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKONTOLOGYSHARDREGISTRYENTRY_H
#define HKONTOLOGYSHARDREGISTRYENTRY_H

@class NSString, NSDate, NSURL;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKOntologyShardRegistryEntry : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *availableChecksum; // ivar: _availableChecksum
@property (readonly, copy, nonatomic) NSDate *availableChecksumDate; // ivar: _availableChecksumDate
@property (readonly, copy, nonatomic) NSString *availableLocale; // ivar: _availableLocale
@property (readonly, copy, nonatomic) NSDate *availableLocaleDate; // ivar: _availableLocaleDate
@property (readonly, copy, nonatomic) NSString *availableRegion; // ivar: _availableRegion
@property (readonly, copy, nonatomic) NSDate *availableRegionDate; // ivar: _availableRegionDate
@property (readonly, nonatomic) NSInteger availableSize; // ivar: _availableSize
@property (readonly, copy, nonatomic) NSDate *availableSizeDate; // ivar: _availableSizeDate
@property (readonly, nonatomic) NSInteger availableState; // ivar: _availableState
@property (readonly, copy, nonatomic) NSDate *availableStateDate; // ivar: _availableStateDate
@property (readonly, copy, nonatomic) NSURL *availableURL; // ivar: _availableURL
@property (readonly, copy, nonatomic) NSDate *availableURLDate; // ivar: _availableURLDate
@property (readonly, nonatomic) NSInteger availableVersion; // ivar: _availableVersion
@property (readonly, copy, nonatomic) NSDate *availableVersionDate; // ivar: _availableVersionDate
@property (readonly, copy, nonatomic) NSString *currentLocale; // ivar: _currentLocale
@property (readonly, copy, nonatomic) NSDate *currentLocaleDate; // ivar: _currentLocaleDate
@property (readonly, copy, nonatomic) NSString *currentRegion; // ivar: _currentRegion
@property (readonly, copy, nonatomic) NSDate *currentRegionDate; // ivar: _currentRegionDate
@property (readonly, nonatomic) NSInteger currentVersion; // ivar: _currentVersion
@property (readonly, copy, nonatomic) NSDate *currentVersionDate; // ivar: _currentVersionDate
@property (readonly, nonatomic) NSInteger desiredState; // ivar: _desiredState
@property (readonly, copy, nonatomic) NSDate *desiredStateDate; // ivar: _desiredStateDate
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *schemaType; // ivar: _schemaType
@property (readonly, nonatomic) NSInteger schemaVersion; // ivar: _schemaVersion
@property (readonly, nonatomic) NSUInteger settings; // ivar: _settings
@property (readonly, nonatomic) NSInteger slot; // ivar: _slot


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)unitTesting_isIdentical:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithAvailableState:(NSInteger)arg0 ;
-(id)copyWithAvailableStateImported;
-(id)copyWithAvailableStateNotImportedForDate:(id)arg0 ;
-(id)copyWithAvailableVersion:(NSInteger)arg0 ;
-(id)copyWithAvailableVersion:(NSInteger)arg0 availableState:(NSInteger)arg1 ;
-(id)copyWithCurrentVersionUndeterminedForDate:(id)arg0 ;
-(id)copyWithDesiredState:(NSInteger)arg0 ;
-(id)copyWithSlot:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 schemaType:(id)arg1 schemaVersion:(NSInteger)arg2 availableURL:(id)arg3 ;
-(id)initWithIdentifier:(id)arg0 schemaType:(id)arg1 schemaVersion:(NSInteger)arg2 availableVersion:(NSInteger)arg3 availableRegion:(id)arg4 availableLocale:(id)arg5 availableURL:(id)arg6 availableChecksum:(id)arg7 availableSize:(NSInteger)arg8 date:(id)arg9 ;
-(id)initWithIdentifier:(id)arg0 schemaType:(id)arg1 schemaVersion:(NSInteger)arg2 availableVersion:(NSInteger)arg3 date:(id)arg4 ;
-(id)initWithIdentifier:(id)arg0 schemaType:(id)arg1 schemaVersion:(NSInteger)arg2 desiredState:(NSInteger)arg3 ;
-(id)initWithIdentifier:(id)arg0 schemaType:(id)arg1 schemaVersion:(NSInteger)arg2 settings:(NSUInteger)arg3 slot:(NSInteger)arg4 desiredState:(NSInteger)arg5 desiredStateDate:(id)arg6 currentVersion:(NSInteger)arg7 currentVersionDate:(id)arg8 currentRegion:(id)arg9 currentRegionDate:(id)arg10 currentLocale:(id)arg11 currentLocaleDate:(id)arg12 availableVersion:(NSInteger)arg13 availableVersionDate:(id)arg14 availableRegion:(id)arg15 availableRegionDate:(id)arg16 availableLocale:(id)arg17 availableLocaleDate:(id)arg18 availableURL:(id)arg19 availableURLDate:(id)arg20 availableChecksum:(id)arg21 availableChecksumDate:(id)arg22 availableSize:(NSInteger)arg23 availableSizeDate:(id)arg24 availableState:(NSInteger)arg25 availableStateDate:(id)arg26 ;
-(id)updatedCopyWithAvailableVersion:(NSInteger)arg0 availableRegion:(id)arg1 availableLocale:(id)arg2 availableURL:(id)arg3 availableChecksum:(id)arg4 availableSize:(NSInteger)arg5 date:(id)arg6 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif