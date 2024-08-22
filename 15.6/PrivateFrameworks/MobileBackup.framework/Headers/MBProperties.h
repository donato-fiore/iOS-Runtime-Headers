// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MBPROPERTIES_H
#define MBPROPERTIES_H

@class NSNumber, NSString, NSDictionary, NSData, NSDate;

#import <Foundation/Foundation.h>


@interface MBProperties : NSObject {
    BOOL _protect;
}


@property (retain, nonatomic) NSNumber *accountClass;
@property (retain, nonatomic) NSNumber *accountType;
@property (retain, nonatomic) NSString *activeAppleID;
@property (readonly, nonatomic) NSDictionary *appleIDs;
@property (retain, nonatomic) NSData *buddyStashData;
@property (readonly, nonatomic) NSString *buildVersion;
@property (readonly, nonatomic) NSDictionary *containers;
@property (retain, nonatomic) NSDate *date;
@property (readonly, nonatomic) NSString *deviceID;
@property (readonly, nonatomic) NSString *deviceName;
@property (nonatomic) BOOL encrypted;
@property (readonly, nonatomic) BOOL hasCorruptSQLiteDBs;
@property (readonly, nonatomic) BOOL hasEncryptedManifestDB;
@property (readonly, nonatomic) BOOL hasManifestDB;
@property (retain, nonatomic) NSData *keybagData;
@property (retain, nonatomic) NSDictionary *lockdownKeys;
@property (nonatomic) NSData *manifestEncryptionKey;
@property (nonatomic) CGFloat maxSupportedVersion; // ivar: _maxSupportedVersion
@property (nonatomic) CGFloat minSupportedVersion; // ivar: _minSupportedVersion
@property (nonatomic, getter=wasPasscodeSet) BOOL passcodeSet;
@property (readonly, nonatomic) NSString *productType;
@property (readonly, nonatomic) id *propertyList; // ivar: _plist
@property (nonatomic, getter=isProtected) BOOL protected; // ivar: _protected
@property (retain, nonatomic) NSString *requiredProductVersion;
@property (readonly, nonatomic) NSString *serialNumber;
@property (nonatomic) CGFloat systemDomainsVersion;
@property (nonatomic) CGFloat version;


+(id)properties;
+(id)propertiesWithFile:(id)arg0 error:(*id)arg1 ;
-(BOOL)_boolForKey:(id)arg0 ;
-(BOOL)writeToFile:(id)arg0 error:(*id)arg1 ;
-(id)_dataForKey:(id)arg0 ;
-(id)_dictionaryForKey:(id)arg0 ;
-(id)_stringForLockdownKey:(id)arg0 ;
-(id)containerWithIdentifier:(id)arg0 ;
-(id)dataWithError:(*id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg0 error:(*id)arg1 ;
-(id)initWithFile:(id)arg0 error:(*id)arg1 ;
-(id)initWithVersion:(CGFloat)arg0 minVersion:(CGFloat)arg1 maxVersion:(CGFloat)arg2 ;
-(id)objectForKey:(id)arg0 ;
-(void)_setBool:(BOOL)arg0 forKey:(id)arg1 ;
-(void)_setData:(id)arg0 forKey:(id)arg1 ;
-(void)_setDictionary:(id)arg0 forKey:(id)arg1 ;
-(void)addAppleID:(id)arg0 DSID:(id)arg1 altDSID:(id)arg2 dataClass:(id)arg3 ;
-(void)addAppleIDsFromSet:(id)arg0 dataClass:(id)arg1 ;
-(void)addAssetDescriptionForAppleID:(id)arg0 assetDescription:(id)arg1 ;
-(void)addContainer:(id)arg0 ;
-(void)addContainersFromArray:(id)arg0 ;
-(void)removeAllContainers;
-(void)removeObjectForKey:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif