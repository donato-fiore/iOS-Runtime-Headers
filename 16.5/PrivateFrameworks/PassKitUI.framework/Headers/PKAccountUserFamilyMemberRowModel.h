// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTUSERFAMILYMEMBERROWMODEL_H
#define PKACCOUNTUSERFAMILYMEMBERROWMODEL_H

@class PKAccountUser, PKAccountUserCollection, NSString, PKFamilyMember, UIImage, PKFeatureApplication;
@protocol PKFamilyMemberRowModel;

#import <Foundation/Foundation.h>


@interface PKAccountUserFamilyMemberRowModel : NSObject <PKFamilyMemberRowModel>



@property (retain, nonatomic) PKAccountUser *accountUser; // ivar: _accountUser
@property (retain, nonatomic) PKAccountUserCollection *accountUserCollection; // ivar: _accountUserCollection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *detailText;
@property (readonly, nonatomic) PKFamilyMember *familyMember; // ivar: _familyMember
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (retain, nonatomic) PKFeatureApplication *invitation; // ivar: _invitation
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *titleText;


+(id)sortedAccountUserFamilyMemberRowModelsForFamilyMemberCollection:(id)arg0 account:(id)arg1 accountUserCollection:(id)arg2 invitations:(id)arg3 ;
-(NSInteger)accessoryType;
-(NSInteger)cellStyle;
-(NSInteger)compare:(id)arg0 ;
-(id)initWithFamilyMember:(id)arg0 ;


@end


#endif