// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ARHITTESTRESULT_H
#define ARHITTESTRESULT_H


#import <Foundation/Foundation.h>

#import "ARAnchor.h"

@interface ARHitTestResult : NSObject

@property (retain, nonatomic) ARAnchor *anchor; // ivar: _anchor
@property (nonatomic) CGFloat distance; // ivar: _distance
@property (nonatomic) ? localTransform; // ivar: _localTransform
@property (readonly, nonatomic) NSUInteger type; // ivar: _type
@property (nonatomic) ? worldTransform; // ivar: _worldTransform


-(id)_description:(BOOL)arg0 ;
-(id)debugQuickLookObject;
-(id)description;
-(id)initWithType:(NSUInteger)arg0 ;


@end


#endif