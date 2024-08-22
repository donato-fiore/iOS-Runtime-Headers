// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STUSAGEGROUPSPECIFIERPROVIDER_H
#define STUSAGEGROUPSPECIFIERPROVIDER_H

@protocol STRootViewModelCoordinator;


#import "STGroupSpecifierProvider.h"

@interface STUsageGroupSpecifierProvider : STGroupSpecifierProvider

@property (retain, nonatomic) NSObject<STRootViewModelCoordinator> *coordinator; // ivar: _coordinator


+(id)providerWithCoordinator:(id)arg0 ;
-(void)invalidate;


@end


#endif