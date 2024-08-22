// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STROOTGROUPSPECIFIERPROVIDER_H
#define STROOTGROUPSPECIFIERPROVIDER_H

@protocol STRootViewModelCoordinator;


#import "STGroupSpecifierProvider.h"

@interface STRootGroupSpecifierProvider : STGroupSpecifierProvider

@property (retain) NSObject<STRootViewModelCoordinator> *coordinator; // ivar: _coordinator


+(id)providerWithCoordinator:(id)arg0 ;
-(void)invalidate;


@end


#endif