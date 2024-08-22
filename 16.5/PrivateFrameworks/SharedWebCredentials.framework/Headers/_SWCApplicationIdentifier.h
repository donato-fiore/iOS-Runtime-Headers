// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SWCAPPLICATIONIDENTIFIER_H
#define _SWCAPPLICATIONIDENTIFIER_H

@class NSString;
@protocol SWCRedactedDescription, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _SWCApplicationIdentifier : NSObject <SWCRedactedDescription, NSCopying, NSSecureCoding>

 {
    NSUInteger _hash;
}


@property (readonly) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly) NSString *prefix; // ivar: _prefix
@property (readonly) NSString *rawValue;
@property (readonly, getter=isValid) BOOL valid;


+(BOOL)isCaseSensitive;
+(BOOL)supportsSecureCoding;
+(id)new;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToApplicationIdentifierIgnoringPrefix:(id)arg0 ;
-(NSUInteger)hash;
-(id)UUIDRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)init;
-(id)initForBundleRecord:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithString:(id)arg0 ;
-(id)redactedDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif