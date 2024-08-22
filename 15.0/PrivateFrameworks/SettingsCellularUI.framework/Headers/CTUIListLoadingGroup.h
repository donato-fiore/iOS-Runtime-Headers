// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CTUILISTLOADINGGROUP_H
#define CTUILISTLOADINGGROUP_H

@class PSSpecifier, PSListController, NSArray;

#import <Foundation/Foundation.h>


@interface CTUIListLoadingGroup : NSObject

@property (weak, nonatomic) PSSpecifier *groupSpecifier; // ivar: _groupSpecifier
@property (weak, nonatomic) PSListController *hostController; // ivar: _hostController
@property (retain, nonatomic) NSArray *specifiers; // ivar: _specifiers
@property (retain, nonatomic) PSSpecifier *spinnerSpecifier; // ivar: _spinnerSpecifier


-(id)initWithHostController:(id)arg0 groupSpecifier:(id)arg1 ;


@end


#endif