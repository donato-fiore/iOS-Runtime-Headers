// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMPRESENCEEVENT_H
#define HMPRESENCEEVENT_H

@class NSString;
@protocol NSSecureCoding, NSCopying, NSMutableCopying;


#import "HMEvent.h"
#import "HMPresenceEventActivation.h"
#import "HMMutableArray.h"

@interface HMPresenceEvent : HMEvent <NSSecureCoding, NSCopying, NSMutableCopying>



@property (retain, nonatomic) HMPresenceEventActivation *activation; // ivar: _activation
@property (readonly, nonatomic) NSUInteger activationGranularity;
@property (readonly, nonatomic) HMMutableArray *observedUsers; // ivar: _observedUsers
@property (readonly, nonatomic) NSUInteger presenceEventType; // ivar: _presenceEventType
@property (retain, nonatomic) NSString *presenceType; // ivar: _presenceType
@property (readonly, nonatomic) NSUInteger presenceUserType; // ivar: _presenceUserType


+(BOOL)isSupportedForHome:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)createWithDictionary:(id)arg0 home:(id)arg1 ;
+(id)users:(id)arg0 home:(id)arg1 presenceType:(id)arg2 ;
-(BOOL)_mergeWithNewObject:(id)arg0 ;
-(id)_serializeForAdd;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDict:(id)arg0 presenceType:(id)arg1 users:(id)arg2 activation:(id)arg3 ;
-(id)initWithDict:(id)arg0 presenceType:(id)arg1 users:(id)arg2 activationGranularity:(NSUInteger)arg3 ;
-(id)initWithPresenceEventType:(NSUInteger)arg0 presenceUserType:(NSUInteger)arg1 ;
-(id)initWithPresenceEventType:(NSUInteger)arg0 presenceUserType:(NSUInteger)arg1 users:(id)arg2 ;
-(id)initWithPresenceType:(id)arg0 ;
-(id)initWithPresenceType:(id)arg0 users:(id)arg1 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)users;
-(void)_updateFromDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updatePresenceType:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateUsers:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif