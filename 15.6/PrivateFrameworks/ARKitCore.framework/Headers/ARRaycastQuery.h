// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARRAYCASTQUERY_H
#define ARRAYCASTQUERY_H


#import <Foundation/Foundation.h>


@interface ARRaycastQuery : NSObject {
    ? _origin;
    ? _direction;
}


@property ? direction;
@property ? origin;
@property (readonly, nonatomic) NSInteger target; // ivar: _target
@property (readonly, nonatomic) NSInteger targetAlignment; // ivar: _targetAlignment


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithOrigin:(NSInteger)arg0 direction:(NSInteger)arg1 allowingTargetalignment;


@end


#endif