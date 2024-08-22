// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NFCONTAINERPOOLOBJECT_H
#define NFCONTAINERPOOLOBJECT_H


#import <Foundation/Foundation.h>


@interface NFContainerPoolObject : NSObject

@property (readonly, nonatomic) id *object;
@property (readonly, nonatomic) NSUInteger ownership; // ivar: _ownership
@property (readonly, nonatomic) id *strongObject; // ivar: _strongObject
@property (readonly, weak, nonatomic) id *weakObject; // ivar: _weakObject


-(id)initWithObject:(id)arg0 ownership:(NSUInteger)arg1 ;


@end


#endif