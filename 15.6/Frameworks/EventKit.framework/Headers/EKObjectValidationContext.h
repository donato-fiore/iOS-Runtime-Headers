// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKOBJECTVALIDATIONCONTEXT_H
#define EKOBJECTVALIDATIONCONTEXT_H


#import <Foundation/Foundation.h>

#import "EKObject.h"

@interface EKObjectValidationContext : NSObject

@property (nonatomic) NSUInteger depth; // ivar: _depth
@property (nonatomic) BOOL reachedMaxDepth; // ivar: _reachedMaxDepth
@property (readonly, nonatomic) EKObject *rootObject; // ivar: _rootObject


-(id)initWithRootObject:(id)arg0 ;
-(void)faultIfNeededForObject:(id)arg0 ;


@end


#endif