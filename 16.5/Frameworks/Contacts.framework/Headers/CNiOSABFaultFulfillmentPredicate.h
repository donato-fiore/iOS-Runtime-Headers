// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNIOSABFAULTFULFILLMENTPREDICATE_H
#define CNIOSABFAULTFULFILLMENTPREDICATE_H

@class NSString;
@protocol CNiOSContactPredicate;


#import "CNPredicate.h"

@interface CNiOSABFaultFulfillmentPredicate : CNPredicate <CNiOSContactPredicate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) int legacyIdentifier; // ivar: _legacyIdentifier
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)os_log;
-(BOOL)cn_supportsEncodedFetching;
-(BOOL)cn_supportsNativeBatchFetch;
-(BOOL)cn_supportsNativeSorting;
-(BOOL)isEqual:(id)arg0 ;
-(id)cn_ABQSLPredicateForAddressBook:(*void)arg0 fetchRequest:(id)arg1 error:(*id)arg2 ;
-(id)cn_copyPeopleInAddressBook:(*void)arg0 fetchRequest:(id)arg1 matchInfos:(*id)arg2 environment:(id)arg3 nserror:(*id)arg4 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLegacyIdentifier:(int)arg0 identifier:(id)arg1 ;
-(struct __CFArray *)cn_copyPeopleInAddressBook:(*void)arg0 fetchRequest:(id)arg1 matchInfos:(*id)arg2 environment:(id)arg3 error:(struct __CFError **)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif