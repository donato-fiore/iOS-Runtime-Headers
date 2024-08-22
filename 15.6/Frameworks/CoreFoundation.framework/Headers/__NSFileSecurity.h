// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef __NSFILESECURITY_H
#define __NSFILESECURITY_H

@protocol NSCopying, NSSecureCoding;


#import "NSFileSecurity.h"

@interface __NSFileSecurity : NSFileSecurity <NSCopying, NSSecureCoding>

 {
    *_filesec _filesec;
}




+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)__new:(struct _filesec *)arg0 ;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(?)copyAccessControlList;
-(BOOL)clearProperties:(NSUInteger)arg0 ;
-(BOOL)getGroup:(*unsigned int)arg0 ;
-(BOOL)getGroupUUID:(*unsigned char)arg0 ;
-(BOOL)getMode:(*unsigned short)arg0 ;
-(BOOL)getOwner:(*unsigned int)arg0 ;
-(BOOL)getOwnerUUID:(*unsigned char)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)setAccessControlList:(struct _acl *)arg0 ;
-(BOOL)setGroup:(unsigned int)arg0 ;
-(BOOL)setGroupUUID:(unsigned char)arg0 ;
-(BOOL)setMode:(unsigned short)arg0 ;
-(BOOL)setOwner:(unsigned int)arg0 ;
-(BOOL)setOwnerUUID:(unsigned char)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(struct _filesec *)_filesec;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif