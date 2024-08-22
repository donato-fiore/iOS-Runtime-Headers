// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNIOSABDISABLEDCONTAINERSPREDICATE_H
#define CNIOSABDISABLEDCONTAINERSPREDICATE_H

@class NSString;
@protocol CNiOSContainerPredicate;


#import "CNPredicate.h"

@interface CNiOSABDisabledContainersPredicate : CNPredicate <CNiOSContainerPredicate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL includesDisabledContainers; // ivar: _includesDisabledContainers
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(?)cn_copyContainersInAddressBookerror;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDisabledContainersIncluded:(BOOL)arg0 ;
-(id)initWithPredicate:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif