// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKACCOUNTINVITATIONCHOOSEMEMBERROW_H
#define PKACCOUNTINVITATIONCHOOSEMEMBERROW_H

@class UIImage, NSPersonNameComponentsFormatter, NSNumberFormatter, PKFamilyMember;

#import <Foundation/Foundation.h>


@interface PKAccountInvitationChooseMemberRow : NSObject {
    UIImage *_photoImage;
    NSPersonNameComponentsFormatter *_nameFormatter;
    NSNumberFormatter *_ageFormatter;
}


@property (readonly, nonatomic, getter=isEligible) BOOL eligible; // ivar: _eligible
@property (readonly, nonatomic) PKFamilyMember *familyMember; // ivar: _familyMember


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)cellForTableView:(id)arg0 atIndexPath:(id)arg1 ;
-(id)initWithFamilyMember:(id)arg0 photoImage:(id)arg1 eligibility:(BOOL)arg2 ;
-(void)_updateConfiguration:(id)arg0 ;


@end


#endif