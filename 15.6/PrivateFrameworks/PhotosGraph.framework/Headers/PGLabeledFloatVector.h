// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGLABELEDFLOATVECTOR_H
#define PGLABELEDFLOATVECTOR_H

@class MAFloatVector;

#import <Foundation/Foundation.h>


@interface PGLabeledFloatVector : NSObject

@property (readonly, nonatomic) MAFloatVector *floatVector; // ivar: _floatVector
@property (readonly, nonatomic) MAFloatVector *label; // ivar: _label


-(id)initWithFloatVector:(id)arg0 label:(id)arg1 ;


@end


#endif