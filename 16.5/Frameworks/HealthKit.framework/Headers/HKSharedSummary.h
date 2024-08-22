// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKSHAREDSUMMARY_H
#define HKSHAREDSUMMARY_H

@class NSUUID, NSSet, NSString, NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HKSharedSummaryTransaction.h"

@interface HKSharedSummary : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSUUID *UUID; // ivar: _UUID
@property (readonly, copy, nonatomic) NSSet *authorizationIdentifiers; // ivar: _authorizationIdentifiers
@property (readonly, copy, nonatomic) NSString *compatibilityVersion; // ivar: _compatibilityVersion
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, copy, nonatomic) NSSet *objectTypes; // ivar: _objectTypes
@property (readonly, copy, nonatomic) NSString *package; // ivar: _package
@property (readonly, copy, nonatomic) NSData *summaryData; // ivar: _summaryData
@property (readonly, copy, nonatomic) HKSharedSummaryTransaction *transaction; // ivar: _transaction
@property (readonly, copy, nonatomic) NSString *version; // ivar: _version


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithUUID:(id)arg0 package:(id)arg1 name:(id)arg2 version:(id)arg3 compatibilityVersion:(id)arg4 authorizationIdentifiers:(id)arg5 objectTypes:(id)arg6 summaryData:(id)arg7 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPackage:(id)arg0 name:(id)arg1 version:(id)arg2 compatibilityVersion:(id)arg3 authorizationIdentifiers:(id)arg4 objectTypes:(id)arg5 summaryData:(id)arg6 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif