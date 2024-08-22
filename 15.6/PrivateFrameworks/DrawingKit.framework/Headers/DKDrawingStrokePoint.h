// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DKDRAWINGSTROKEPOINT_H
#define DKDRAWINGSTROKEPOINT_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface DKDrawingStrokePoint : NSObject <NSCopying>



@property (nonatomic) CGFloat force; // ivar: _force
@property (nonatomic) CGPoint location; // ivar: _location
@property (nonatomic) CGFloat velocity; // ivar: _velocity


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif