// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INCALLRECORD_H
#define INCALLRECORD_H

@class NSNumber, NSDate, NSString, NSArray;
@protocol INCacheableContainer, INJSONSerializable, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "INPerson.h"

@interface INCallRecord : NSObject <INCacheableContainer, INJSONSerializable, NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSInteger callCapability; // ivar: _callCapability
@property (readonly, copy, nonatomic) NSNumber *callDuration; // ivar: _callDuration
@property (readonly, nonatomic) NSInteger callRecordType; // ivar: _callRecordType
@property (readonly, copy, nonatomic) INPerson *caller;
@property (readonly, copy, nonatomic) INPerson *caller; // ivar: _caller
@property (readonly, copy, nonatomic) NSDate *dateCreated; // ivar: _dateCreated
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSNumber *isCallerIdBlocked; // ivar: _isCallerIdBlocked
@property (readonly, copy, nonatomic) NSNumber *numberOfCalls; // ivar: _numberOfCalls
@property (readonly, copy, nonatomic) NSArray *participants; // ivar: _participants
@property (readonly, nonatomic) NSInteger preferredCallProvider; // ivar: _preferredCallProvider
@property (readonly, copy, nonatomic) NSString *providerBundleId; // ivar: _providerBundleId
@property (readonly, copy, nonatomic) NSString *providerId; // ivar: _providerId
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSNumber *unseen; // ivar: _unseen


+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg0 codableDescription:(id)arg1 from:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_dictionaryRepresentation;
-(id)_intents_cacheableObjects;
-(id)_intents_encodeWithJSONEncoder:(id)arg0 codableDescription:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionAtIndent:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 dateCreated:(id)arg1 callRecordType:(NSInteger)arg2 callCapability:(NSInteger)arg3 callDuration:(id)arg4 unseen:(id)arg5 ;
-(id)initWithIdentifier:(id)arg0 dateCreated:(id)arg1 callRecordType:(NSInteger)arg2 callCapability:(NSInteger)arg3 callDuration:(id)arg4 unseen:(id)arg5 numberOfCalls:(id)arg6 ;
-(id)initWithIdentifier:(id)arg0 dateCreated:(id)arg1 callRecordType:(NSInteger)arg2 callCapability:(NSInteger)arg3 callDuration:(id)arg4 unseen:(id)arg5 participants:(id)arg6 numberOfCalls:(id)arg7 isCallerIdBlocked:(id)arg8 ;
-(id)initWithIdentifier:(id)arg0 dateCreated:(id)arg1 callRecordType:(NSInteger)arg2 callCapability:(NSInteger)arg3 callDuration:(id)arg4 unseen:(id)arg5 preferredCallProvider:(NSInteger)arg6 participants:(id)arg7 numberOfCalls:(id)arg8 providerId:(id)arg9 providerBundleId:(id)arg10 isCallerIdBlocked:(id)arg11 ;
-(id)initWithIdentifier:(id)arg0 dateCreated:(id)arg1 caller:(id)arg2 callRecordType:(NSInteger)arg3 callCapability:(NSInteger)arg4 callDuration:(id)arg5 unseen:(id)arg6 ;
-(id)initWithIdentifier:(id)arg0 dateCreated:(id)arg1 caller:(id)arg2 callRecordType:(NSInteger)arg3 callCapability:(NSInteger)arg4 callDuration:(id)arg5 unseen:(id)arg6 numberOfCalls:(id)arg7 ;
-(id)initWithIdentifier:(id)arg0 dateCreated:(id)arg1 caller:(id)arg2 callRecordType:(NSInteger)arg3 callCapability:(NSInteger)arg4 callDuration:(id)arg5 unseen:(id)arg6 numberOfCalls:(id)arg7 isCallerIdBlocked:(id)arg8 ;
-(id)initWithIdentifier:(id)arg0 dateCreated:(id)arg1 caller:(id)arg2 callRecordType:(NSInteger)arg3 callCapability:(NSInteger)arg4 callDuration:(id)arg5 unseen:(id)arg6 preferredCallProvider:(NSInteger)arg7 numberOfCalls:(id)arg8 providerId:(id)arg9 ;
-(id)initWithIdentifier:(id)arg0 dateCreated:(id)arg1 caller:(id)arg2 callRecordType:(NSInteger)arg3 callCapability:(NSInteger)arg4 callDuration:(id)arg5 unseen:(id)arg6 preferredCallProvider:(NSInteger)arg7 numberOfCalls:(id)arg8 providerId:(id)arg9 providerBundleId:(id)arg10 isCallerIdBlocked:(id)arg11 ;
-(void)_intents_updateContainerWithCache:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif