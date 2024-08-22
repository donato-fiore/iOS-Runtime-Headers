// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNESPRESSODETECTEDOBJECT_H
#define VNESPRESSODETECTEDOBJECT_H


#import <Foundation/Foundation.h>


@interface VNEspressoDetectedObject : NSObject

@property CGRect bounds; // ivar: _bounds
@property (readonly) CGPoint center;
@property float confidence; // ivar: _confidence
@property NSInteger objectType; // ivar: _objectType


-(id)description;
-(id)initWithObjectType:(NSInteger)arg0 boundingBox:(struct CGRect )arg1 confidence:(float)arg2 ;


@end


#endif