// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTWEAKREFERENCE_H
#define MTWEAKREFERENCE_H


#import <Foundation/Foundation.h>


@interface MTWeakReference : NSObject

@property (weak, nonatomic) id *object; // ivar: _object


-(id)initWithObject:(id)arg0 ;


@end


#endif