// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _LSCORETYPESRECORDPROXY_H
#define _LSCORETYPESRECORDPROXY_H

@class NSProxy;
@protocol NSSecureCoding;


#import "LSBundleRecord.h"

@interface _LSCoreTypesRecordProxy : NSProxy <NSSecureCoding>



@property (readonly, nonatomic) LSBundleRecord *_realRecord; // ivar: _realRecord


+(BOOL)supportsSecureCoding;
+(Class)classForKeyedUnarchiver;
+(id)classFallbacksForKeyedArchiver;
+(id)description;
-(BOOL)conformsToProtocol:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isFreeProfileValidated;
-(BOOL)isKindOfClass:(Class)arg0 ;
-(BOOL)isMemberOfClass:(Class)arg0 ;
-(BOOL)isProfileValidated;
-(BOOL)isUPPValidated;
-(BOOL)supportsNowPlaying;
-(BOOL)wasBuiltWithThreadSanitizer;
-(Class)classForCoder;
-(Class)classForKeyedArchiver;
-(NSUInteger)hash;
-(char)developerType;
-(id)SDKVersion;
-(id)UIBackgroundModes;
-(id)URL;
-(id)WKBackgroundModes;
-(id)_loadRealRecord;
-(id)accentColorName;
-(id)applicationIdentifier;
-(id)awakeAfterUsingCoder:(id)arg0 ;
-(id)bundleIdentifier;
-(id)dataContainerURL;
-(id)debugDescription;
-(id)description;
-(id)entitlements;
-(id)executableURL;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)intentDefinitionURLs;
-(id)intentsRestrictedWhileLocked;
-(id)intentsRestrictedWhileProtectedDataUnavailable;
-(id)localizedName;
-(id)localizedNameWithPreferredLocalizations:(id)arg0 ;
-(id)localizedShortName;
-(id)localizedShortNameWithPreferredLocalizations:(id)arg0 ;
-(id)localizedUsageDescriptionForFeature:(NSUInteger)arg0 ;
-(id)localizedUsageDescriptionForFeature:(NSUInteger)arg0 preferredLocalizations:(id)arg1 ;
-(id)machOUUIDs;
-(id)managedPersonas;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(id)replacementObjectForCoder:(id)arg0 ;
-(id)replacementObjectForKeyedArchiver:(id)arg0 ;
-(id)serviceRecords;
-(id)signerIdentity;
-(id)signerOrganization;
-(id)supportedIntentMediaCategories;
-(id)supportedIntents;
-(id)teamIdentifier;
-(unsigned int)platform;
-(void)detach;
-(void)encodeWithCoder:(id)arg0 ;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif