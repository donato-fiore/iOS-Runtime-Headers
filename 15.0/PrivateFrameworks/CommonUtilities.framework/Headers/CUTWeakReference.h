// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CUTWEAKREFERENCE_H
#define CUTWEAKREFERENCE_H


#import <Foundation/Foundation.h>


@interface CUTWeakReference : NSObject

@property (weak, nonatomic) id *object; // ivar: _object
@property (nonatomic) NSUInteger objectAddress; // ivar: _objectAddress


+(id)weakRefWithObject:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithObject:(id)arg0 ;


@end


#endif