// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IXPLACEHOLDER_H
#define IXPLACEHOLDER_H

@class NSString, MIStoreMetadata;
@protocol NSSecureCoding;


#import "IXOwnedDataPromise.h"
#import "IXPlaceholderSeed.h"

@interface IXPlaceholder : IXOwnedDataPromise <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *bundleID;
@property (readonly, copy, nonatomic) NSString *bundleName;
@property (readonly, nonatomic) BOOL hasEntitlementsPromise;
@property (readonly, nonatomic) BOOL hasIconPromise;
@property (readonly, nonatomic) BOOL hasPlugInPlaceholderPromises;
@property (readonly, nonatomic) NSUInteger installType;
@property (copy, nonatomic) MIStoreMetadata *metadata;
@property (readonly, nonatomic) NSUInteger placeholderType;
@property (retain, nonatomic) IXPlaceholderSeed *seed;


+(BOOL)supportsSecureCoding;
+(id)_iconDataForBundle:(struct __CFBundle *)arg0 atURL:(id)arg1 error:(*id)arg2 ;
+(id)_infoPlistLocalizationDictionaryForBundleURL:(id)arg0 error:(*id)arg1 ;
+(id)_placeholderForBundle:(id)arg0 client:(NSUInteger)arg1 withParent:(id)arg2 installType:(NSUInteger)arg3 metadata:(id)arg4 error:(*id)arg5 ;
+(id)_pngDataForCGImage:(struct CGImage *)arg0 error:(*id)arg1 ;
+(id)errorStringForMISError:(int)arg0 ;
+(id)placeholderForInstallable:(id)arg0 client:(NSUInteger)arg1 installType:(NSUInteger)arg2 metadata:(id)arg3 error:(*id)arg4 ;
+(id)placeholderForRemovableSystemAppWithBundleID:(id)arg0 client:(NSUInteger)arg1 installType:(NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)_doInitWithBundleName:(id)arg0 bundleID:(id)arg1 installType:(NSUInteger)arg2 isPlugin:(BOOL)arg3 ;
-(BOOL)launchProhibited:(*BOOL)arg0 error:(*id)arg1 ;
-(BOOL)setConfigurationCompleteWithError:(*id)arg0 ;
-(BOOL)setEntitlementsPromise:(id)arg0 error:(*id)arg1 ;
-(BOOL)setIconPromise:(id)arg0 error:(*id)arg1 ;
-(BOOL)setInfoPlistLocalizations:(id)arg0 error:(*id)arg1 ;
-(BOOL)setLaunchProhibited:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)setPlaceholderAttributes:(id)arg0 error:(*id)arg1 ;
-(BOOL)setPlugInPlaceholderPromises:(id)arg0 error:(*id)arg1 ;
-(BOOL)setSinfData:(id)arg0 error:(*id)arg1 ;
-(id)entitlementsPromiseWithError:(*id)arg0 ;
-(id)iconPromiseWithError:(*id)arg0 ;
-(id)infoPlistLocalizationsWithError:(*id)arg0 ;
-(id)initAppPlaceholderWithBundleName:(id)arg0 bundleID:(id)arg1 installType:(NSUInteger)arg2 client:(NSUInteger)arg3 ;
-(id)initPlugInPlaceholderWithBundleName:(id)arg0 bundleID:(id)arg1 parentPlaceholder:(id)arg2 client:(NSUInteger)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSeed:(id)arg0 ;
-(id)metadataWithError:(*id)arg0 ;
-(id)placeholderAttributesWithError:(*id)arg0 ;
-(id)plugInPlaceholderPromisesWithError:(*id)arg0 ;
-(id)sinfDataWithError:(*id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif