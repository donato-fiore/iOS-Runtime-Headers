// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCMUSERIDENTITY_H
#define MCMUSERIDENTITY_H

@class NSURL, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "MCMPOSIXUser.h"

@interface MCMUserIdentity : NSObject <NSCopying>



@property (readonly, nonatomic, getter=isDataSeparated) BOOL dataSeparated;
@property (nonatomic) NSInteger extensionHandle; // ivar: _extensionHandle
@property (readonly, nonatomic) BOOL homeDirectoryExists;
@property (readonly, nonatomic) NSURL *homeDirectoryURL; // ivar: _homeDirectoryURL
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) unsigned int kernelPersonaID; // ivar: _kernelPersonaID
@property (readonly, nonatomic, getter=isNoSpecificPersona) BOOL noSpecificPersona;
@property (readonly, nonatomic) int personaType; // ivar: _personaType
@property (readonly, nonatomic) NSString *personaUniqueString; // ivar: _personaUniqueString
@property (readonly, copy, nonatomic) id *plist;
@property (readonly, nonatomic) MCMPOSIXUser *posixUser; // ivar: _posixUser
@property (readonly, nonatomic) NSString *shortDescription;


+(BOOL)isUserIdentityRequiredForContainerClass:(NSUInteger)arg0 ;
+(id)_identifierForPOSIXUID:(unsigned int)arg0 personaUniqueString:(id)arg1 personaType:(int)arg2 ;
+(id)userIdentityWithPlist:(id)arg0 cache:(id)arg1 error:(*NSUInteger)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToUserIdentity:(id)arg0 ;
-(BOOL)isStrictlyEqualToUserIdentity:(id)arg0 ;
-(NSUInteger)hash;
-(id)_descriptionForPersonaType:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithPOSIXUser:(id)arg0 homeDirectoryURL:(id)arg1 personaUniqueString:(id)arg2 personaType:(int)arg3 kernelPersonaID:(unsigned int)arg4 ;
-(id)initWithPlist:(id)arg0 cache:(id)arg1 error:(*NSUInteger)arg2 ;
-(id)initWithVersion1PlistDictionary:(id)arg0 cache:(id)arg1 error:(*NSUInteger)arg2 ;
-(id)initWithVersion2PlistDictionary:(id)arg0 cache:(id)arg1 error:(*NSUInteger)arg2 ;
-(id)userIdentityWithPOSIXUser:(id)arg0 ;
-(void)dealloc;


@end


#endif