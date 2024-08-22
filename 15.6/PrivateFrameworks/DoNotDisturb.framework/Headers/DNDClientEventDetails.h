// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DNDCLIENTEVENTDETAILS_H
#define DNDCLIENTEVENTDETAILS_H

@class NSString;
@protocol NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "DNDContactHandle.h"

@interface DNDClientEventDetails : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>



@property (readonly, nonatomic) NSUInteger behavior; // ivar: _behavior
@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL notifyAnyway; // ivar: _notifyAnyway
@property (readonly, copy, nonatomic) DNDContactHandle *sender; // ivar: _sender
@property (readonly, nonatomic) BOOL shouldAlwaysInterrupt;
@property (readonly, copy, nonatomic) NSString *threadIdentifier; // ivar: _threadIdentifier
@property (readonly, nonatomic) NSUInteger type; // ivar: _type
@property (readonly, nonatomic) NSUInteger urgency; // ivar: _urgency


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_descriptionForRedacted:(BOOL)arg0 ;
-(id)_initWithDetails:(id)arg0 ;
-(id)_initWithIdentifier:(id)arg0 bundleIdentifier:(id)arg1 type:(NSUInteger)arg2 urgency:(NSUInteger)arg3 sender:(id)arg4 threadIdentifier:(id)arg5 notifyAnyway:(BOOL)arg6 behavior:(NSUInteger)arg7 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)redactedDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif