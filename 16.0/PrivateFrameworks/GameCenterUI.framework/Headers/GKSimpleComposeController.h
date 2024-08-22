// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKSIMPLECOMPOSECONTROLLER_H
#define GKSIMPLECOMPOSECONTROLLER_H

@class NSString, NSArray;


#import "GKBaseComposeController.h"
#import "GKComposeHeaderWithStaticRecipients.h"

@interface GKSimpleComposeController : GKBaseComposeController

@property (retain, nonatomic) NSString *defaultMessage; // ivar: _defaultMessage
@property (copy, nonatomic) id *doneHandler; // ivar: _doneHandler
@property (retain, nonatomic) NSArray *players; // ivar: _players
@property (retain, nonatomic) GKComposeHeaderWithStaticRecipients *toField; // ivar: _toField


-(void)donePressed;
-(void)loadView;
-(void)pushOntoNavigationController:(id)arg0 withDoneHandler:(id)arg1 ;
-(void)setupSendButton;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif