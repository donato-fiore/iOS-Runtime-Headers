// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNIOSABEKPARTICIPANTPREDICATE_H
#define CNIOSABEKPARTICIPANTPREDICATE_H

@class NSURL, NSString;
@protocol CNiOSContactPredicate;


#import "CNPredicate.h"

@interface CNiOSABEKParticipantPredicate : CNPredicate <CNiOSContactPredicate>



@property (copy, nonatomic) NSURL *URL; // ivar: _URL
@property (copy, nonatomic) NSString *customDescription; // ivar: _customDescription
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *emailAddress; // ivar: _emailAddress
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)cn_supportsEncodedFetching;
-(BOOL)cn_supportsNativeBatchFetch;
-(BOOL)cn_supportsNativeSorting;
-(id)cn_cursorForEncodedPeopleFromAddressBook:(*void)arg0 fetchRequest:(id)arg1 environment:(id)arg2 error:(*id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 URL:(id)arg1 emailAddress:(id)arg2 customDescription:(id)arg3 ;
-(struct __CFArray *)cn_copyPeopleInAddressBook:(*void)arg0 fetchRequest:(id)arg1 matchInfos:(*id)arg2 environment:(id)arg3 error:(struct __CFError **)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif