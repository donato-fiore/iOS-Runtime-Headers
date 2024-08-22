// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKATOMBATCHMETADATA_H
#define CKATOMBATCHMETADATA_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CKDistributedTimestampStateVector.h"
#import "CKDistributedTimestampClockVector.h"

@interface CKAtomBatchMetadata : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) CKDistributedTimestampStateVector *contentsVector; // ivar: _contentsVector
@property (readonly, nonatomic) CKDistributedTimestampClockVector *dependenciesVector; // ivar: _dependenciesVector
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) CKDistributedTimestampClockVector *previousVector; // ivar: _previousVector
@property (readonly, nonatomic) CKDistributedTimestampStateVector *removalsVector; // ivar: _removalsVector


+(BOOL)supportsSecureCoding;
+(id)replacementBatchMetadatasForBatchDirectory:(id)arg0 withMergeableValuePreviousStateVector:(id)arg1 currentStateVector:(id)arg2 ;
-(BOOL)_validate:(*id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToBatchMetadata:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionWithStringSiteIdentifiers;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 previousStateVector:(id)arg1 currentStateVector:(id)arg2 ;
-(id)initWithIdentifier:(id)arg0 previousVector:(id)arg1 contentsVector:(id)arg2 removalsVector:(id)arg3 dependenciesVector:(id)arg4 ;
-(id)initWithPreviousStateVector:(id)arg0 currentStateVector:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif