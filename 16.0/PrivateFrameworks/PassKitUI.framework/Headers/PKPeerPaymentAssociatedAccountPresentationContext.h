// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPEERPAYMENTASSOCIATEDACCOUNTPRESENTATIONCONTEXT_H
#define PKPEERPAYMENTASSOCIATEDACCOUNTPRESENTATIONCONTEXT_H

@class PKFamilyMember, PKPaymentTransaction;

#import <Foundation/Foundation.h>


@interface PKPeerPaymentAssociatedAccountPresentationContext : NSObject

@property (retain, nonatomic) PKFamilyMember *member; // ivar: _member
@property (nonatomic) NSInteger setupType; // ivar: _setupType
@property (retain, nonatomic) PKPaymentTransaction *transaction; // ivar: _transaction


-(id)description;
-(id)initWithFAFamilyMember:(id)arg0 options:(id)arg1 ;
-(id)initWithPKFamilyMember:(id)arg0 options:(id)arg1 ;
-(id)initWithPKFamilyMember:(id)arg0 setupType:(NSInteger)arg1 ;
-(id)initWithPKFamilyMember:(id)arg0 transaction:(id)arg1 ;


@end


#endif