// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPEERPAYMENTFAMILYMEMBERROWMODEL_H
#define PKPEERPAYMENTFAMILYMEMBERROWMODEL_H

@class PKPeerPaymentAccount, NSString, PKFamilyMember, UIImage, PKPeerPaymentAccountInvitation;
@protocol PKFamilyMemberRowModel;

#import <Foundation/Foundation.h>


@interface PKPeerPaymentFamilyMemberRowModel : NSObject <PKFamilyMemberRowModel>



@property (retain, nonatomic) PKPeerPaymentAccount *account; // ivar: _account
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *detailText;
@property (readonly, nonatomic) PKFamilyMember *familyMember; // ivar: _familyMember
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (retain, nonatomic) PKPeerPaymentAccountInvitation *invitation; // ivar: _invitation
@property (readonly, nonatomic) NSUInteger state;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *titleText;


+(id)sortedPeerPaymentFamilyMemberRowModelsForFamilyMembers:(id)arg0 peerPaymentAccount:(id)arg1 ;
-(NSInteger)accessoryType;
-(NSInteger)cellStyle;
-(NSInteger)compare:(id)arg0 ;
-(id)initWithFamilyMember:(id)arg0 ;


@end


#endif