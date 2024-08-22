// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXGPOINTREFERENCE_H
#define PXGPOINTREFERENCE_H


#import <Foundation/Foundation.h>

#import "PXGLayout.h"

@interface PXGPointReference : NSObject

@property (readonly, nonatomic) BOOL isValid; // ivar: _isValid
@property (readonly, weak, nonatomic) PXGLayout *layout; // ivar: _layout
@property (readonly, nonatomic) CGPoint point; // ivar: _point


-(id)init;
-(id)initWithPoint:(struct CGPoint )arg0 layout:(id)arg1 ;
-(void)invalidate;


@end


#endif