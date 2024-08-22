// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AATRUSTEDCONTACTDETAILSVIEWMODELFACTORY_H
#define AATRUSTEDCONTACTDETAILSVIEWMODELFACTORY_H


#import <Foundation/Foundation.h>


@interface AATrustedContactDetailsViewModelFactory : NSObject



-(id)viewModelForFlow:(NSUInteger)arg0 withContact:(id)arg1 ;
-(void)prepareForCustodianForFlow:(id)arg0 withContact:(id)arg1 ;
-(void)prepareForMyBenefactorFlow:(id)arg0 withContact:(id)arg1 ;
-(void)prepareForMyBeneficiaryFlow:(id)arg0 withContact:(id)arg1 ;
-(void)prepareForMyCustodianFlow:(id)arg0 withContact:(id)arg1 ;


@end


#endif