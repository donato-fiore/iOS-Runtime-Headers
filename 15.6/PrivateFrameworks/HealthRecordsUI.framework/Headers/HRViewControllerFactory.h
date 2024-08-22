// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HRVIEWCONTROLLERFACTORY_H
#define HRVIEWCONTROLLERFACTORY_H


#import <Foundation/Foundation.h>


@interface HRViewControllerFactory : NSObject



+(id)shared;
-(id)init;
-(id)makeAccountDetailViewControllerForAccount:(id)arg0 profile:(id)arg1 ;
-(id)makeDetailViewControllerForRecord:(id)arg0 usingProfile:(id)arg1 ;
-(id)makeOnboadingTileViewControllerUsing:(id)arg0 ;
-(id)makeSettingsViewControllerUsing:(id)arg0 ;
-(id)makeViewControllerForRecord:(id)arg0 usingProfile:(id)arg1 ;


@end


#endif