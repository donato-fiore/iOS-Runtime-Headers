// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKAPPLIEDANIMATIONCONTEXT_H
#define CKAPPLIEDANIMATIONCONTEXT_H

@class NSString, CALayer;

#import <Foundation/Foundation.h>


@interface CKAppliedAnimationContext : NSObject

@property (readonly, copy, nonatomic) NSString *key; // ivar: _key
@property (readonly, nonatomic) CALayer *targetLayer; // ivar: _targetLayer


-(id)initWithTargetLayer:(id)arg0 key:(id)arg1 ;


@end


#endif