// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSCLOUDSYNCCONTROLLER_H
#define PSCLOUDSYNCCONTROLLER_H

@protocol PSCloudSyncPopoverDelegate;


#import "PSListController.h"

@interface PSCloudSyncController : PSListController

@property (weak, nonatomic) NSObject<PSCloudSyncPopoverDelegate> *delegate; // ivar: _delegate


-(id)cloudSyncEnabled;
-(id)initWithDelegate:(id)arg0 ;
-(id)specifiers;
-(void)setCloudSyncEnabled:(id)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif