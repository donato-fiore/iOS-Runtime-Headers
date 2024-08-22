// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKWEAKREFERENCE_H
#define SKWEAKREFERENCE_H


#import <Foundation/Foundation.h>


@interface SKWeakReference : NSObject

@property (weak, nonatomic) id *object; // ivar: _object


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithObject:(id)arg0 ;


@end


#endif