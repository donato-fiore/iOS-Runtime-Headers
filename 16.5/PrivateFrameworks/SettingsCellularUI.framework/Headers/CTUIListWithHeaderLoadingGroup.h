// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CTUILISTWITHHEADERLOADINGGROUP_H
#define CTUILISTWITHHEADERLOADINGGROUP_H

@class NSArray, PSListController, PSSpecifier;

#import <Foundation/Foundation.h>


@interface CTUIListWithHeaderLoadingGroup : NSObject

@property (retain, nonatomic) NSArray *contentSpecifiers; // ivar: _contentSpecifiers
@property (retain, nonatomic) NSArray *headerSpecifiers; // ivar: _headerSpecifiers
@property (weak, nonatomic) PSListController *hostController; // ivar: _hostController
@property (retain, nonatomic) PSSpecifier *spinnerSpecifier; // ivar: _spinnerSpecifier


-(id)initWithHostController:(id)arg0 ;
-(id)specifiers;


@end


#endif