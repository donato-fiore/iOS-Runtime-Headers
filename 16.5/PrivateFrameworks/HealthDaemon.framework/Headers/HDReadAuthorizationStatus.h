// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDREADAUTHORIZATIONSTATUS_H
#define HDREADAUTHORIZATIONSTATUS_H

@class _HKAuthorizationRecord, NSNumber, NSDate, NSString, NSSet;

#import <Foundation/Foundation.h>

#import "HDSQLitePredicate.h"

@interface HDReadAuthorizationStatus : NSObject

@property (readonly, nonatomic) NSInteger authorizationMode;
@property (readonly, copy, nonatomic) HDSQLitePredicate *authorizationPredicate;
@property (readonly, copy, nonatomic) _HKAuthorizationRecord *authorizationRecord; // ivar: _authorizationRecord
@property (readonly, nonatomic) NSInteger authorizationRequest;
@property (readonly, nonatomic) NSInteger authorizationStatus;
@property (readonly, nonatomic) BOOL canRead;
@property (readonly, nonatomic) BOOL canWrite;
@property (readonly, copy, nonatomic) NSNumber *deletedObjectBaselineAnchor; // ivar: _deletedObjectBaselineAnchor
@property (readonly, nonatomic) BOOL isAuthorizationDetermined;
@property (readonly, copy, nonatomic) NSNumber *objectLimitAnchor; // ivar: _objectLimitAnchor
@property (readonly, copy, nonatomic) NSDate *objectLimitModifiedDate;
@property (readonly, copy, nonatomic) NSString *restrictedBundleIdentifier; // ivar: _restrictedBundleIdentifier
@property (readonly, copy, nonatomic) NSSet *restrictedSourceEntities; // ivar: _restrictedSourceEntities


+(id)notDerminedReadAuthorizationStatus;
+(id)unrestrictedReadAuthorizationStatus;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithReadAuthorizationStatus:(NSInteger)arg0 authorizationRequest:(NSInteger)arg1 authorizationMode:(NSInteger)arg2 restrictedBundleIdentifier:(id)arg3 restrictedSourceEntities:(id)arg4 deletedObjectBaselineAnchor:(id)arg5 objectLimitAnchor:(id)arg6 objectLimitModifiedDate:(id)arg7 ;
-(void)disableReading;
-(void)disableSharing;


@end


#endif