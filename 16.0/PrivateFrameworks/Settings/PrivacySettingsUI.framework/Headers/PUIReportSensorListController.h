// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUIREPORTSENSORLISTCONTROLLER_H
#define PUIREPORTSENSORLISTCONTROLLER_H

@class PSListController;


#import "PUIReportSensorManager.h"

@interface PUIReportSensorListController : PSListController

@property (nonatomic) BOOL alphabeticalSort; // ivar: _alphabeticalSort
@property (retain, nonatomic) PUIReportSensorManager *manager; // ivar: _manager


+(id)appSpecifiersFromManager:(id)arg0 ;
+(id)valueForSpecifier:(id)arg0 ;
-(BOOL)shouldReloadSpecifiersOnResume;
-(id)init;
-(id)specifiers;
-(void)dataDidChange;
-(void)dealloc;
-(void)sortByWasTapped;


@end


#endif