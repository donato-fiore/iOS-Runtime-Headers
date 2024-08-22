// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NEHOTSPOTHS20SETTINGS_H
#define NEHOTSPOTHS20SETTINGS_H

@class NSArray, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NEHotspotHS20Settings : NSObject <NSCopying, NSSecureCoding>



@property (copy) NSArray *MCCAndMNCs; // ivar: _MCCAndMNCs
@property (readonly) NSString *domainName; // ivar: _domainName
@property (copy) NSArray *naiRealmNames; // ivar: _naiRealmNames
@property (copy) NSArray *roamingConsortiumOIs; // ivar: _roamingConsortiumOIs
@property (getter=isRoamingEnabled) BOOL roamingEnabled; // ivar: _roamingEnabled


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDomainName:(id)arg0 roamingEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif