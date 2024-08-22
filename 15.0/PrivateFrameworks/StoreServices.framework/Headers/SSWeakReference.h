// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSWEAKREFERENCE_H
#define SSWEAKREFERENCE_H


#import <Foundation/Foundation.h>


@interface SSWeakReference : NSObject {
    id *_object;
    NSUInteger _objectAddress;
}


@property (readonly, nonatomic) id *object;


+(id)weakReferenceWithObject:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(void)dealloc;


@end


#endif