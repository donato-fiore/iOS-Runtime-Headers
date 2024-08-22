// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IAMPRESENTATIONPOLICY_H
#define IAMPRESENTATIONPOLICY_H


#import <Foundation/Foundation.h>


@interface IAMPresentationPolicy : NSObject

@property (readonly, nonatomic) CGFloat minimumIntervalBetweenPresentations; // ivar: _minimumIntervalBetweenPresentations
@property (readonly, nonatomic) NSInteger policyGroup; // ivar: _policyGroup


+(NSInteger)presentationPolicyGroupForGlobalPresentationPolicyGroup:(int)arg0 ;
-(id)initWithMinimumIntervalBetweenPresentations:(CGFloat)arg0 forPresentationPolicyGroup:(NSInteger)arg1 ;


@end


#endif