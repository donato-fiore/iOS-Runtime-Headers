// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LPCOLLABORATIONFOOTERCONFIGURATION_H
#define LPCOLLABORATIONFOOTERCONFIGURATION_H

@class SLCollaborationFooterViewModel;

#import <Foundation/Foundation.h>


@interface LPCollaborationFooterConfiguration : NSObject

@property (copy, nonatomic) id *action; // ivar: _action
@property (retain, nonatomic) SLCollaborationFooterViewModel *viewModel; // ivar: _viewModel


+(id)configurationWithViewModel:(id)arg0 action:(id)arg1 ;


@end


#endif