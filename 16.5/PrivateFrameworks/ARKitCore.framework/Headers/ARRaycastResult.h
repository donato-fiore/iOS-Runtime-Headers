// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARRAYCASTRESULT_H
#define ARRAYCASTRESULT_H

@class NSUUID;

#import <Foundation/Foundation.h>

#import "ARAnchor.h"

@interface ARRaycastResult : NSObject

@property (retain, nonatomic) ARAnchor *anchor; // ivar: _anchor
@property (retain, nonatomic) NSUUID *anchorIdentifier; // ivar: _anchorIdentifier
@property (nonatomic) ? localTransform; // ivar: _localTransform
@property (nonatomic) NSInteger target; // ivar: _target
@property (readonly, nonatomic) NSInteger targetAlignment; // ivar: _targetAlignment
@property (readonly, nonatomic) ? worldTransform; // ivar: _worldTransform


-(id)_description:(BOOL)arg0 ;
-(id)description;
-(id)initWithWorldTransform:(struct ? )arg0 target:(NSInteger)arg1 targetAlignment:(NSInteger)arg2 ;


@end


#endif