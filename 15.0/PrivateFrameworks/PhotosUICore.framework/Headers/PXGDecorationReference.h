// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXGDECORATIONREFERENCE_H
#define PXGDECORATIONREFERENCE_H


#import <Foundation/Foundation.h>

#import "PXGSpriteReference.h"

@interface PXGDecorationReference : NSObject

@property (readonly, nonatomic) PXGSpriteReference *decoratedSpriteReference; // ivar: _decoratedSpriteReference
@property (readonly, nonatomic) NSInteger decorationType; // ivar: _decorationType


-(id)init;
-(id)initWithDecoratedSpriteReference:(id)arg0 decorationType:(NSInteger)arg1 ;


@end


#endif