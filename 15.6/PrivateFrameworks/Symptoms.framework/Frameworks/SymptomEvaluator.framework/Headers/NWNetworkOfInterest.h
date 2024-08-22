// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NWNETWORKOFINTEREST_H
#define NWNETWORKOFINTEREST_H

@class NSMutableArray, NSPredicate, NSArray, NSDate;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "NWNetworkAdviceUpdate.h"

@interface NWNetworkOfInterest : NSObject <NSSecureCoding, NSCopying>

 {
    BOOL isThinnedOut;
    NSMutableArray *allInvitesHourly;
    NSMutableArray *bgInvitesHourly;
    int lastHour;
}


@property NSInteger considerAlternate; // ivar: _considerAlternate
@property (retain) NWNetworkAdviceUpdate *considerAlternateUpdate; // ivar: _considerAlternateUpdate
@property (readonly) NSPredicate *customSignature; // ivar: _customSignature
@property BOOL discretionaryTrafficInvited; // ivar: _discretionaryTrafficInvited
@property (readonly) NSInteger flags; // ivar: _flags
@property (readonly) NSInteger interface; // ivar: _interface
@property NSInteger interfaceClass; // ivar: _interfaceClass
@property (readonly) NSInteger interfaceSubtype; // ivar: _interfaceSubtype
@property (readonly) unsigned char interfaceType; // ivar: _interfaceType
@property (readonly) BOOL isAny; // ivar: _isAny
@property (readonly) BOOL isBuiltin; // ivar: _isBuiltin
@property BOOL isTrafficEligible; // ivar: _isTrafficEligible
@property NSInteger linkQuality; // ivar: _linkQuality
@property NSInteger powerCostDL; // ivar: _powerCostDL
@property NSInteger powerCostUL; // ivar: _powerCostUL
@property (retain) NSArray *predictions; // ivar: _predictions
@property (retain) NSDate *predictionsGeneratedAt; // ivar: _predictionsGeneratedAt
@property (readonly) NSInteger scopedToLOI; // ivar: _scopedToLOI
@property (readonly) NSInteger version; // ivar: _version
@property BOOL willGetDiscretionaryTrafficInvites; // ivar: _willGetDiscretionaryTrafficInvites


+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
+(BOOL)supportsSecureCoding;
-(BOOL)_isEqualToNOI:(id)arg0 ;
-(BOOL)_newDistroSlot;
-(BOOL)atHomeScopedNOI;
-(BOOL)atWorkScopedNOI;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_descriptionFull:(BOOL)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dayOfWeekGrouping;
-(id)description;
-(id)hasForegroundActivity;
-(id)identityAttrsOnly;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSpec:(unsigned char)arg0 isAny:(BOOL)arg1 isBuiltin:(BOOL)arg2 scopedToLOI:(NSInteger)arg3 flags:(NSInteger)arg4 hasCustomSignature:(id)arg5 ;
-(id)instantQuality;
-(id)invitesHourlyDistribution;
-(id)trainingProgress;
-(id)typePrettyPrint;
-(id)valueForUndefinedKey:(id)arg0 ;
-(void)addObserverForAllKeyPaths:(id)arg0 ;
-(void)anchorPowerCostToLinkQuality;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeObserverForAllKeyPaths:(id)arg0 ;
-(void)setHasForegroundActivity:(id)arg0 ;
-(void)setInstantQuality:(id)arg0 ;
-(void)setValue:(id)arg0 forUndefinedKey:(id)arg1 ;


@end


#endif