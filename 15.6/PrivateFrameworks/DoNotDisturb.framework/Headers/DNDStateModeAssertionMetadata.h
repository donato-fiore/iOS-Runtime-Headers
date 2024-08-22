// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DNDSTATEMODEASSERTIONMETADATA_H
#define DNDSTATEMODEASSERTIONMETADATA_H

@class NSDateInterval, NSString, NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DNDStateModeAssertionMetadata : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSDateInterval *activeDateInterval; // ivar: _activeDateInterval
@property (readonly, copy, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (readonly, nonatomic) NSUInteger lifetimeType; // ivar: _lifetimeType
@property (readonly, copy, nonatomic) NSString *modeIdentifier; // ivar: _modeIdentifier
@property (readonly, copy, nonatomic) NSDate *userVisibleEndDate; // ivar: _userVisibleEndDate


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithClientIdentifier:(id)arg0 modeIdentifier:(id)arg1 lifetimeType:(NSUInteger)arg2 activeDateInterval:(id)arg3 userVisibleEndDate:(id)arg4 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif