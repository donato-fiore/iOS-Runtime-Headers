// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSIRANKEDGROUP_H
#define PSIRANKEDGROUP_H


#import <Foundation/Foundation.h>

#import "PSIGroup.h"

@interface PSIRankedGroup : NSObject

@property (readonly, nonatomic) PSIGroup *group; // ivar: _group
@property (nonatomic) CGFloat score; // ivar: _score


-(id)initWithGroup:(id)arg0 score:(CGFloat)arg1 ;


@end


#endif