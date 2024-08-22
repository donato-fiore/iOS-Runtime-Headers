// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FBSDISPLAYIDENTITY_H
#define FBSDISPLAYIDENTITY_H

@class NSString;
@protocol BSXPCCoding, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "FBSDisplayIdentity.h"

@interface FBSDisplayIdentity : NSObject <BSXPCCoding, NSCopying, NSSecureCoding>

 {
    NSInteger _type;
    unsigned int _displayID;
    unsigned int _connectionSeed;
    NSString *_uniqueIdentifier;
    FBSDisplayIdentity *_rootIdentity;
}


@property (readonly, nonatomic, getter=isCarDisplay) BOOL carDisplay;
@property (readonly, nonatomic, getter=isCarInstrumentsDisplay) BOOL carInstrumentsDisplay;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isExternal) BOOL external; // ivar: _external
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isRootIdentity;
@property (readonly, nonatomic, getter=isMainDisplay) BOOL mainDisplay;
@property (readonly, nonatomic) int pid; // ivar: _pid
@property (readonly, copy, nonatomic) FBSDisplayIdentity *rootIdentity;
@property (readonly, nonatomic, getter=isSecure) BOOL secure; // ivar: _secure
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)expectsSecureRendering;
-(BOOL)isAirPlayDisplay;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isMainRootDisplay;
-(BOOL)isMusicOnlyDisplay;
-(BOOL)isRestrictedAirPlayDisplay;
-(BOOL)isiPodOnlyDisplay;
-(NSInteger)type;
-(id)_initWithType:(NSInteger)arg0 displayID:(unsigned int)arg1 connectionSeed:(unsigned int)arg2 pid:(int)arg3 external:(BOOL)arg4 uniqueIdentifier:(id)arg5 secure:(BOOL)arg6 root:(id)arg7 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(id)uniqueIdentifier;
-(unsigned int)connectionSeed;
-(unsigned int)displayID;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif