// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _BLASTDOORDRAWINGSTROKEPOINT_H
#define _BLASTDOORDRAWINGSTROKEPOINT_H


#import <Foundation/Foundation.h>


@interface _BlastDoorDrawingStrokePoint : NSObject

@property (nonatomic) CGFloat force; // ivar: _force
@property (nonatomic) CGPoint location; // ivar: _location
@property (nonatomic) CGFloat velocity; // ivar: _velocity


-(id)createDKStrokePoint;
-(id)init;


@end


#endif