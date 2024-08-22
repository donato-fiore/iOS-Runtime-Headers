// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCMPOSIXUSER_H
#define MCMPOSIXUSER_H

@class NSURL, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MCMPOSIXUser : NSObject <NSCopying>



@property (readonly, nonatomic) unsigned int UID; // ivar: _UID
@property (readonly, nonatomic) NSURL *homeDirectoryURL; // ivar: _homeDirectoryURL
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) unsigned int primaryGID; // ivar: _primaryGID
@property (readonly, nonatomic, getter=isRoleUser) BOOL roleUser; // ivar: _roleUser
@property (readonly, nonatomic, getter=isRoot) BOOL root; // ivar: _root
@property (readonly, nonatomic) NSURL *unvalidatedHomeDirectoryURL; // ivar: _unvalidatedHomeDirectoryURL
@property (readonly, nonatomic, getter=hasUseableHomeDirectory) BOOL useableHomeDirectory; // ivar: _useableHomeDirectory


+(BOOL)_isRoleUserWithUID:(unsigned int)arg0 homeDirectoryURL:(id)arg1 ;
+(id)_getCachedUID:(unsigned int)arg0 flush:(BOOL)arg1 onCacheMiss:(id)arg2 ;
+(id)_posixUserWithPasswdPtr:(struct passwd *)arg0 ;
+(id)_posixUserWithUID:(unsigned int)arg0 name:(id)arg1 useUID:(BOOL)arg2 ;
+(id)currentPOSIXUser;
+(id)nobody;
+(id)posixUserWithName:(id)arg0 ;
+(id)posixUserWithUID:(unsigned int)arg0 ;
+(id)root;
+(void)flush;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPOSIXUser:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)fullDescription;
-(id)initWithUID:(unsigned int)arg0 primaryGID:(unsigned int)arg1 homeDirectoryURL:(id)arg2 unvalidatedHomeDirectoryURL:(id)arg3 name:(id)arg4 roleUser:(BOOL)arg5 ;


@end


#endif