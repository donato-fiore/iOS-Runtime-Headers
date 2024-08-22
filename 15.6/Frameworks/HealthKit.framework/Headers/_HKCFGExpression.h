// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HKCFGEXPRESSION_H
#define _HKCFGEXPRESSION_H


#import <Foundation/Foundation.h>


@interface _HKCFGExpression : NSObject

@property (nonatomic) BOOL isPrivate; // ivar: _isPrivate


-(NSUInteger)_minimumLength;
-(id)_label;
-(void)_tryNodesWithContext:(id)arg0 solutionTest:(id)arg1 ;


@end


#endif