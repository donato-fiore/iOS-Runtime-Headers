// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPMADRESOURCEENTRY_H
#define VCPMADRESOURCEENTRY_H


#import <Foundation/Foundation.h>

#import "VCPMADResource.h"

@interface VCPMADResourceEntry : NSObject

@property (nonatomic) NSInteger activeCount; // ivar: _activeCount
@property (nonatomic) NSInteger currentCost; // ivar: _currentCost
@property (retain, nonatomic) VCPMADResource *resource; // ivar: _resource


-(id)initWithResource:(id)arg0 ;


@end


#endif