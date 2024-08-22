// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DMCMDMSIGNOUTSPECIFIERPROVIDER_H
#define DMCMDMSIGNOUTSPECIFIERPROVIDER_H



#import "DMCSpecifierProvider.h"
#import "DMCEnrollmentInterface.h"

@interface DMCMDMSignoutSpecifierProvider : DMCSpecifierProvider

@property (retain, nonatomic) DMCEnrollmentInterface *enrollmentInterface; // ivar: _enrollmentInterface


-(id)_specifierForSignoutButton;
-(id)specifiers;
-(id)viewController;
-(void)_specifierForMDMProfileWasTapped:(id)arg0 ;


@end


#endif