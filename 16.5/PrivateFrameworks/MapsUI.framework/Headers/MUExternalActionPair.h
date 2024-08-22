// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUEXTERNALACTIONPAIR_H
#define MUEXTERNALACTIONPAIR_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "MUGroupedExternalActionController.h"

@interface MUExternalActionPair : NSObject

@property (readonly, nonatomic) MUGroupedExternalActionController *actionController; // ivar: _actionController
@property (readonly, nonatomic) NSArray *viewModels; // ivar: _viewModels


-(id)initWithAction:(id)arg0 actionController:(id)arg1 ;


@end


#endif