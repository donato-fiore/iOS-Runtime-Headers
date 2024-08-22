// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKSPSLEEPEVENT_H
#define HKSPSLEEPEVENT_H

@class NSString, NSDate;
@protocol BSDescriptionProviding, NAEquatable, NAHashable, HKSPXPCObject, HKSPDictionarySerializable, NSCopying, NSSecureCoding, HKSPSyncAnchor;

#import <Foundation/Foundation.h>


@interface HKSPSleepEvent : NSObject <BSDescriptionProviding, NAEquatable, NAHashable, HKSPXPCObject, HKSPDictionarySerializable, NSCopying, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDate *dueDate; // ivar: _dueDate
@property (readonly, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isUserVisible; // ivar: _isUserVisible
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<HKSPSyncAnchor> *syncAnchor; // ivar: _syncAnchor
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)sleepEventWithIdentifier:(id)arg0 dueDate:(id)arg1 ;
+(id)sleepEventWithIdentifier:(id)arg0 dueDate:(id)arg1 expirationDate:(id)arg2 isUserVisible:(BOOL)arg3 ;
+(id)sleepEventWithIdentifier:(id)arg0 dueDate:(id)arg1 isUserVisible:(BOOL)arg2 ;
+(id)sleepEventWithIdentifier:(id)arg0 dueDate:(id)arg1 type:(NSUInteger)arg2 ;
+(id)sleepEventWithIdentifier:(id)arg0 dueDate:(id)arg1 type:(NSUInteger)arg2 expirationDate:(id)arg3 isUserVisible:(BOOL)arg4 ;
+(id)sleepEventWithIdentifier:(id)arg0 dueDate:(id)arg1 type:(NSUInteger)arg2 isUserVisible:(BOOL)arg3 ;
+(id)standardEventIdentifiers;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isExpired:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 dueDate:(id)arg1 type:(NSUInteger)arg2 expirationDate:(id)arg3 isUserVisible:(BOOL)arg4 ;
-(id)objectWithSyncAnchor:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif