// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKIDENTITYHEROVIEWCONTROLLER_H
#define PKIDENTITYHEROVIEWCONTROLLER_H



#import "PKExplanationViewController.h"
#import "PKIdentityHeroViewConfiguration.h"

@interface PKIdentityHeroViewController : PKExplanationViewController {
    PKIdentityHeroViewConfiguration *_configuration;
}


@property (copy, nonatomic) id *primaryButtonClickedBlock; // ivar: _primaryButtonClickedBlock
@property (copy, nonatomic) id *secondaryButtonClickedBlock; // ivar: _secondaryButtonClickedBlock


-(id)initWithConfiguration:(id)arg0 ;
-(void)primaryButtonClicked:(id)arg0 ;
-(void)secondaryButtonClicked:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif