// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNIOSABINSTANTMESSAGEADDRESSCONTACTPREDICATE_H
#define CNIOSABINSTANTMESSAGEADDRESSCONTACTPREDICATE_H

@class NSString;
@protocol CNiOSContactPredicate;


#import "CNPredicate.h"
#import "CNInstantMessageAddress.h"

@interface CNiOSABInstantMessageAddressContactPredicate : CNPredicate <CNiOSContactPredicate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) CNInstantMessageAddress *imAddress; // ivar: _imAddress
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)cn_supportsEncodedFetching;
-(BOOL)cn_supportsNativeBatchFetch;
-(BOOL)cn_supportsNativeSorting;
-(BOOL)isEqual:(id)arg0 ;
-(id)cn_copyPeopleInAddressBook:(*void)arg0 fetchRequest:(id)arg1 matchInfos:(*id)arg2 environment:(id)arg3 nserror:(*id)arg4 ;
-(id)cn_cursorForEncodedPeopleFromAddressBook:(*void)arg0 fetchRequest:(id)arg1 environment:(id)arg2 error:(*id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInstantMessageAddress:(id)arg0 ;
-(struct __CFArray *)cn_copyPeopleInAddressBook:(*void)arg0 fetchRequest:(id)arg1 matchInfos:(*id)arg2 environment:(id)arg3 error:(struct __CFError **)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif