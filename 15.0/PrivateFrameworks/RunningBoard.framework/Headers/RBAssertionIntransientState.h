// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RBASSERTIONINTRANSIENTSTATE_H
#define RBASSERTIONINTRANSIENTSTATE_H

@class NSString, NSMutableSet;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface RBAssertionIntransientState : NSObject <NSCopying>



@property (nonatomic) BOOL definesRelativeStartTime; // ivar: _definesRelativeStartTime
@property (retain, nonatomic) NSString *domainAttributes; // ivar: _domainAttributes
@property (nonatomic) NSUInteger endPolicy; // ivar: _endPolicy
@property (nonatomic) BOOL hasDomainAttribute; // ivar: _hasDomainAttribute
@property (nonatomic) BOOL hasHereditaryGrant; // ivar: _hasHereditaryGrant
@property (nonatomic) BOOL invalidatesSynchronously; // ivar: _invalidatesSynchronously
@property (nonatomic) CGFloat invalidationDuration; // ivar: _invalidationDuration
@property (nonatomic) BOOL isPersistent; // ivar: _isPersistent
@property (nonatomic) NSUInteger legacyReason; // ivar: _legacyReason
@property (nonatomic) NSUInteger runningReason; // ivar: _runningReason
@property (readonly, nonatomic) NSMutableSet *sourceEnvironments; // ivar: _sourceEnvironments
@property (nonatomic) NSUInteger startPolicy; // ivar: _startPolicy
@property (nonatomic) BOOL suspendsOnOriginatorSuspension; // ivar: _suspendsOnOriginatorSuspension
@property (nonatomic) BOOL terminateTargetOnOriginatorExit; // ivar: _terminateTargetOnOriginatorExit
@property (nonatomic) CGFloat warningDuration; // ivar: _warningDuration


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif