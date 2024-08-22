// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TFCONTAINERPOOLOBJECT_H
#define TFCONTAINERPOOLOBJECT_H


#import <Foundation/Foundation.h>


@interface TFContainerPoolObject : NSObject

@property (readonly, nonatomic) id *object;
@property (readonly, nonatomic) NSUInteger ownership; // ivar: _ownership
@property (readonly, nonatomic) id *strongObject; // ivar: _strongObject
@property (readonly, weak, nonatomic) id *weakObject; // ivar: _weakObject


-(id)initWithObject:(id)arg0 ownership:(NSUInteger)arg1 ;


@end


#endif