// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IKLINK_H
#define IKLINK_H


#import <Foundation/Foundation.h>

#import "SKNode.h"

@interface IKLink : NSObject

@property (readonly, nonatomic) float angle; // ivar: _angle
@property (nonatomic) float angleInitial; // ivar: _angleInitial
@property (nonatomic) float length; // ivar: _length
@property (retain, nonatomic) SKNode *node; // ivar: _node
@property (nonatomic) unsigned long position; // ivar: _position
@property (nonatomic) unsigned long size; // ivar: _size


-(CGFloat)normalizeAngle:(CGFloat)arg0 ;
-(id)initWithNode:(id)arg0 ;
-(void)rotateByAngle:(float)arg0 ;


@end


#endif