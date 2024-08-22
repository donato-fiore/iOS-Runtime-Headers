// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _FPITEMDECORATIONVALUERESOLVER_H
#define _FPITEMDECORATIONVALUERESOLVER_H


#import <Foundation/Foundation.h>

#import "FPItem.h"

@interface _FPItemDecorationValueResolver : NSObject {
    FPItem *_item;
    NSUInteger _style;
}




+(id)resolverForItem:(id)arg0 style:(NSUInteger)arg1 ;
-(id)initWithItem:(id)arg0 style:(NSUInteger)arg1 ;
-(id)valueForKey:(id)arg0 ;


@end


#endif