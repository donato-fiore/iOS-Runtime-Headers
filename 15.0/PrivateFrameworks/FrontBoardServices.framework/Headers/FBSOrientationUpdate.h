// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FBSORIENTATIONUPDATE_H
#define FBSORIENTATIONUPDATE_H


#import <Foundation/Foundation.h>


@interface FBSOrientationUpdate : NSObject

@property (nonatomic) CGFloat duration; // ivar: _duration
@property (nonatomic) NSInteger orientation; // ivar: _orientation
@property (nonatomic) NSInteger rotationDirection; // ivar: _rotationDirection
@property (nonatomic) NSUInteger sequenceNumber; // ivar: _sequenceNumber


-(id)description;
-(id)init;
-(id)initWithOrientation:(NSInteger)arg0 sequenceNumber:(NSUInteger)arg1 duration:(CGFloat)arg2 rotationDirection:(NSInteger)arg3 ;


@end


#endif